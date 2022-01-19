#include <iostream>
using namespace std;

void twoSum(int nums[], int size, int n)
{
    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (nums[i] + nums[j] == n)
            {
                cout << "[" << i << "," << j << "]" << endl;
                return;
            }
        }
    }
}

int main()
{
    int nums[] = {5, 10, 3, 7, 5};
    twoSum(nums, 5, 12);
    return 0;
}