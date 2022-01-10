#include <iostream>
using namespace std;

// O(n) implementation
int Stocks(int arr[], int size)
{
    int res = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            res += arr[i] - arr[i - 1];
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 5, 3, 8, 12};

    cout
        << "maximum profit is " << Stocks(arr, 5)
        << endl;
    return 0;
}