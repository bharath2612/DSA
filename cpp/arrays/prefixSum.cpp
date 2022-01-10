#include <iostream>
using namespace std;

// O(1) implementation ,
void prefixSum(int arr[], int size, int l, int r)
{
    int prefixSum[size];
    prefixSum[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    if (l != 0)
    {
        cout << "Sum of indexes between " << l << " and " << r << " is " << prefixSum[r] - prefixSum[l - 1] << endl;
    }
    else
    {
        cout << "Sum of indexes between " << l << " and " << r << " is " << prefixSum[r] << endl;
    }
}
int main()
{
    int arr[] = {2, 10, 3, 9, 6, 5, 4};
    for (int i = 0; i < 5; i++)
    {
        prefixSum(arr, 7, i, i + 2);
    }
    return 0;
}