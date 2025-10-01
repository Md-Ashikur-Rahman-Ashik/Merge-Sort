#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstArraySize;
    cin >> firstArraySize;
    int firstArray[firstArraySize];
    for (int i = 0; i < firstArraySize; i++)
    {
        cin >> firstArray[i];
    }

    int secondArraySize;
    cin >> secondArraySize;
    int secondArray[secondArraySize];
    for (int q = 0; q < secondArraySize; q++)
    {
        cin >> secondArray[q];
    }

    int finalArraySize = firstArraySize + secondArraySize;
    int finalArray[finalArraySize];

    int firstPointer = 0, secondPointer = 0, finalPointer = 0;

    while (finalPointer < finalArraySize)
    {
        if (firstPointer < firstArraySize && secondPointer < secondArraySize && firstArray[firstPointer] <= secondArray[secondPointer])
        {
            finalArray[finalPointer] = firstArray[firstPointer];
            finalPointer++;
            firstPointer++;
        }
        else if (firstPointer < firstArraySize && secondPointer < secondArraySize && firstArray[firstPointer] >= secondArray[secondPointer])
        {
            finalArray[finalPointer] = secondArray[secondPointer];
            finalPointer++;
            secondPointer++;
        }
        else if (firstPointer < firstArraySize)
        {
            finalArray[finalPointer] = firstArray[firstPointer];
            finalPointer++;
            firstPointer++;
        }
        else if (secondPointer < secondArraySize)
        {
            finalArray[finalPointer] = secondArray[secondPointer];
            finalPointer++;
            secondPointer++;
        }
    }

    for (int i = 0; i < finalArraySize; i++)
    {
        cout << finalArray[i] << " ";
    }

    return 0;
}

// Input
// 3
// 2 9 13
// 4
// 3 5 7 8