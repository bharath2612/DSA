#include <iostream>
#include <cmath>
using namespace std;

//O(n) time comp , O(1) aux space
//Remove duplicates from sorted arrays
int minAdjDiff(int arr[], int n)
{
    int res = abs(arr[1] - arr[0]);

    for (int i = 2; i < n; i++)
    {
        res = min(res, abs(arr[i] - arr[i - 1]));
    }
    res = min(res, abs(arr[n - 1] - arr[0]));
    return res;
}

int main()
{

    int arr[] = {10, -3, -4, 7, 6, 5, -4, -1};

    cout
        << "minimum adjacent difference is " << minAdjDiff(arr, 8)
        << endl;
    cout << endl;
}