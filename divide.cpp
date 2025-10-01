#include <bits/stdc++.h>
using namespace std;

void divide(int integerArray[], int leftIndex, int rightIndex)
{
    if (leftIndex >= rightIndex)
    {
        return;
    }

    int midIndex = (leftIndex + rightIndex) / 2;
    divide(integerArray, leftIndex, midIndex);
    divide(integerArray, midIndex + 1, rightIndex);
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

// Input
// 5
// 30 9 1 7 4