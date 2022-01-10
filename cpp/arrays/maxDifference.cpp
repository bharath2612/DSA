#include <iostream>
using namespace std;

// O(n) implementation
int maxDifference(int arr[], int size)
{
    int res = arr[1] - arr[0], minValue = arr[0];
    for (int i = 1; i < size; i++)
    {
        res = max(res, arr[i] - minValue);
        minValue = min(minValue, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};

    cout
        << "maximum Difference is " << maxDifference(arr, 7)
        << endl;
    return 0;
}