#include <bits/stdc++.h>
using namespace std;

void conquer(int initialArray[], int leftIndex, int mid, int rightIndex)
{
    int firstArraySize = mid - leftIndex + 1;
    int firstArray[firstArraySize];

    int initialPointer = leftIndex;

    for (int i = 0; i < firstArraySize; i++)
    {
        firstArray[i] = initialArray[initialPointer];
        initialPointer++;
    }

    int secondArraySize = rightIndex - mid;
    int secondArray[secondArraySize];

    initialPointer = mid + 1;
    for (int i = 0; i < secondArraySize; i++)
    {
        secondArray[i] = initialArray[initialPointer];
        initialPointer++;
    }

    int firstPointer = 0, secondPointer = 0;
    int finalPointer = leftIndex;

    while (firstPointer < firstArraySize && secondPointer < secondArraySize)
    {
        if (firstPointer < firstArraySize && secondPointer < secondArraySize && firstArray[firstPointer] <= secondArray[secondPointer])
        {
            initialArray[finalPointer] = firstArray[firstPointer];
            firstPointer++;
            finalPointer++;
        }
        else
        {
            initialArray[finalPointer] = secondArray[secondPointer];
            secondPointer++;
            finalPointer++;
        }
    }

    while (firstPointer < firstArraySize)
    {
        initialArray[finalPointer] = firstArray[firstPointer];
        firstPointer++;
        finalPointer++;
    }

    while (secondPointer < secondArraySize)
    {
        initialArray[finalPointer] = secondArray[secondPointer];
        secondPointer++;
        finalPointer++;
    }
}

void divide(int integerArray[], int leftIndex, int rightIndex)
{
    if (leftIndex >= rightIndex)
    {
        return;
    }

    int mid = (leftIndex + rightIndex) / 2;
    divide(integerArray, leftIndex, mid);
    divide(integerArray, mid + 1, rightIndex);
    conquer(integerArray, leftIndex, mid, rightIndex);
}

int main()
{
    int arraySize;
    cin >> arraySize;
    int integerArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> integerArray[i];
    }

    divide(integerArray, 0, arraySize - 1);

    for (int i = 0; i < arraySize; i++)
    {
        cout << integerArray[i] << " ";
    }

    return 0;
}