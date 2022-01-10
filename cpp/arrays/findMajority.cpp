#include <iostream>
using namespace std;

// O(n) implementation
int findMajority(int arr[], int size)
{
    int res = 0, count = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= size / 2)
    {
        return -1;
    }
    return res;
}
int main()
{
    int arr[] = {
        3,
        3,
        3,
        3,
        3,
        2,
        2,
        2,
        2};
    cout
        << "index of the majority is " << findMajority(arr, 8)
        << endl;
    return 0;
}