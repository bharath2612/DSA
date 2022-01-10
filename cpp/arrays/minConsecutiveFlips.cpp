#include <iostream>
using namespace std;

// O(n) implementation , O(1) aux space
void minConsecutiveFlips(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << i - 1 << endl;
            }
        }
    }
    if (arr[size - 1] != arr[0])
    {
        cout << (size - 1) << endl;
    }
}
int main()
{
    int arr[] = {0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0};
    minConsecutiveFlips(arr, 12);
    return 0;
}