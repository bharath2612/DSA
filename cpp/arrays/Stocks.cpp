#include <iostream>
// #include <math.h>
using namespace std;

// O(n) implementation
int Stocks(int arr[], int size)
{
    int maxCur = 0;
    int maxSoFar = 0;
    for (int i = 1; i < size; i++)
    {
        maxCur = max(0, maxCur += arr[i] - arr[i - 1]);
        maxSoFar = max(maxCur, maxSoFar);
    }
    return maxSoFar;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};

    cout
        << "maximum profit is " << Stocks(arr, 6)
        << endl;
    return 0;
}