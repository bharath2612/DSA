#include <iostream>
using namespace std;

// Theta(n) implementation
void leaders(int arr[], int size)
{
    int cur_lead = arr[size - 1];
    cout << cur_lead << " ";
    for (int i = size - 2; i >= 0; i--)
    {
        if (cur_lead < arr[i])
        {
            cur_lead = arr[i];
            cout << cur_lead << " ";
        }
    }

    cout << endl;

    //can reverse the cout array and display items from left to right
}

int main()
{
    int arr[] = {6, 10, 3, 7, 5};
    leaders(arr, 5);
    return 0;
}