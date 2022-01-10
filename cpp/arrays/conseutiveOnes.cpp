#include <iostream>
using namespace std;

// O(n) implementation , O(1) aux space
int conseutiveOnes(int arr[], int size)
{
    int res = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
            res = max(res, count);
        }
    }
    return res;
}
int main()
{
    int arr[] = {0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
    cout
        << "maximum consectuve 1 is " << conseutiveOnes(arr, 12)
        << endl;
    return 0;
}