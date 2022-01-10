#include <iostream>
using namespace std;

// Theta(n) implementation , O(1) aux space

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int size, int rotate)
{
    reverse(arr, 0, rotate - 1);
    reverse(arr, rotate, size - 1);
    reverse(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 2, 3, 7, 5, 9};
    int r = 2;
    leftRotate(arr, 6, 2);
    return 0;
}