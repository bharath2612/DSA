#include <iostream>
using namespace std;

// Theta(n) implementation
void MoveZerosToEnd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 0, 0, 7, 0, 3, 0};
    MoveZerosToEnd(arr, 7);
    return 0;
}