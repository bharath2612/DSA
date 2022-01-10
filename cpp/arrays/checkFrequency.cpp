#include <iostream>
using namespace std;

// Theta(n) implementation
void checkFrequency(int arr[], int size)
{
    int freq = 1, i = 1;
    while (i < size)
    {
        while (i < size && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (size == 1 || arr[size - 1] != arr[size - 2])
        cout << arr[size - 1] << " " << 1 << endl;
}

int main()
{
    int arr[] = {10, 9, 20, 30, 30, 30, 40, 40, 50};
    checkFrequency(arr, 9);
    return 0;
}