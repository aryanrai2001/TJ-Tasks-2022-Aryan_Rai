#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(int a, int b)
{
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    return a < b;
}

int findMaxK(vector<int>& nums) 
{
    sort(nums.begin(), nums.end(), comparator);
    int max = -1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] + nums[i+1] == 0)
        {
            int val = nums[i];
            val = (val < 0) ? -val : val;
            if (val > max)
                max = val;
        }
    }
    return max;
}

int main()
{
    vector<int> a = {-1,2,-3,3};
    vector<int> b = {-1,10,6,7,-7,1};
    vector<int> c = {-10,8,6,7,-2,-3};
    cout << findMaxK(a) << endl;
    cout << findMaxK(b) << endl;
    cout << findMaxK(c) << endl;
}