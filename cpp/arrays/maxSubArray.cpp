#include <iostream>
using namespace std;

// O(n) implementation
int maxSubArray(int arr[], int size)
{
    int res = 0;
    int maxEnding = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int main()
{
    int arr[] = {-3, 8, -2, 4, -5, 6};

    cout
        << "maximum profit is " << maxSubArray(arr, 6)
        << endl;
    return 0;
}