// buid array from permutation

#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[nums[i]]);
    }

    return ans;
}

int main()
{
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> v = buildArray(nums);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}