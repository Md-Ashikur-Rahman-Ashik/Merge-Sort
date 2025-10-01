#include <bits/stdc++.h>
using namespace std;

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

void conquer(int integerArray[], int leftIndex, int mid, int rightIndex)
{
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

    return 0;
}