#include <iostream>
using namespace std;

//O(n) implementation
bool isSorted(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 12, 13, 2};

    cout
        << "second largest index is " << isSorted(arr, 4)
        << endl;
    return 0;
}