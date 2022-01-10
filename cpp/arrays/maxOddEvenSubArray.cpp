#include <iostream>
using namespace std;

// O(n) implementation
int maxOddEvenSubArray(int arr[], int size)
{
    int res = 0, curr = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] % 2 == 0 && arr[i - 1] % 2 != 0 || arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 10, 20, 6, 3, 8};

    cout
        << "maximum profit is " << maxOddEvenSubArray(arr, 6)
        << endl;
    return 0;
}