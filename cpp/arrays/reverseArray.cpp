#include <iostream>
using namespace std;

// Theta(n) implementation
void reverseArray(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    for(int )
    reverseArray(arr, 5);
    return 0;
}