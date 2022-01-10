#include <iostream>
using namespace std;

// O(n) implementation
int secondLargest(int arr[], int size)
{
    int l = 0, s = -1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[l])
        {
            s = l;
            l = i;
        }
        else if (arr[i] != arr[l])
        {
            if (s == -1 || arr[i] > arr[s])
            {
                s = i;
            }
        }
    }
    return s;
}

int main()
{
    int arr[] = {10, 10};

    cout
        << "second largest index is " << secondLargest(arr, 2)
        << endl;
    return 0;
}