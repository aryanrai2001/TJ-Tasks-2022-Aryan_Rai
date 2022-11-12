#include <iostream>
#include <vector>

using namespace std;

int longestSubarray(vector<int>& nums) 
{
    int count = 0, maxCount = 0, max = 0;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] > nums[max])
            max = i;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == nums[max])
        {
            count++;
            if (i < nums.size() - 1)
                continue;
        }
        if (maxCount < count)
            maxCount = count;
        count = 0;
    }
    return maxCount;
}

int main()
{
    vector<int> nums = {1, 3, 3, 2, 3, 3, 3, 2};
    cout << longestSubarray(nums) << endl;
}