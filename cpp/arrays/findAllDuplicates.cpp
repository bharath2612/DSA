#include <iostream>
#include <vector>
using namespace std;


//still some work left
vector<int> findAllDuplicates(vector<int> &nums)
{
    // if (nums.empty())
    //     return {};
    vector<int> ans;
    sort(begin(nums), end(nums));
    int s = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (!(s ^ nums[i]))
        {
            ans.push_back(nums[i]), i += 1;
            if (i < nums.size())
                s = nums[i];
            else
                break;
        }
        else
            s = nums[i];
    }
    return ans;
}
int main()
{
    vector<int> nums{4, 9, 2, 7, 8, 2, 3, 1};
    cout
        << "Duplicate numbers are " << findAllDuplicates(nums)
        << endl;
    return 0;
}