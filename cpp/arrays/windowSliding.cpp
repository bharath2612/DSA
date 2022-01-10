#include <iostream>
using namespace std;

//O(n) implementation
int isSubSum(int arr[], int size, int sum)
{
    int curr_sum = arr[0], start = 0;
    for (int i = 1; i <= size; i++)
    {
        // If curr_sum exceeds the sum, then remove the starting elements
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        // If curr_sum becomes equal to sum, then return true
        if (curr_sum == sum)
        {
            cout << "Sum found between indexes " << start << " and " << i - 1 << endl;
            return 1;
        }

        // Add this element to curr_sum
        if (i < size)
            curr_sum = curr_sum + arr[i];
    }
    cout << "No sub Arrays found" << endl;
    return 0;
}

int main()
{
    int arr[] = {10, 12, 13, 2, 17};
    isSubSum(arr, 5, 32);
    return 0;
}