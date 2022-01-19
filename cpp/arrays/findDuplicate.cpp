#include <iostream>
using namespace std;

//assuming there is one pair of duplicate
//  O(n) implementation , O(1) aux space
int findDuplicate(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = abs(nums[i]) - 1;

        // mark as visited
        nums[index] *= -1;
        // incase of duplicate, this will become +ve
        if (nums[index] > 0)
            return abs(nums[i]);
    }
    return -1;
}
int main()
{
    int nums[] = {3, 5, 1, 5, 3};
    cout
        << "Duplicate number is " << findDuplicate(nums, 5)
        << endl;
    return 0;
}