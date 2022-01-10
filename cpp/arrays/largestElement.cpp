#include <iostream>
using namespace std;

// O(n) implementation
int largestElement(int arr[], int size)
{
    int res = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {6, 2, 3, 9, 8};

    cout
        << "maximum number index is " << largestElement(arr, 5)
        << endl;
    return 0;
}