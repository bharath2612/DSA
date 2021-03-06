#include <iostream>
using namespace std;

// O(n) implementation
int findMajority(int nums[], int size)
{
    int res = 0, count = 1;
    for (int i = 0; i < size; i++)
    {
        if (nums[res] == nums[i])
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
        if (nums[res] == nums[i])
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
    int nums[] = {
        6, 5, 5};
    cout
        << "index of the majority is " << findMajority(nums, 3)
        << endl;
    return 0;
}