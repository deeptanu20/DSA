// Number of good pairs

#include <bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int> &nums, int n) // brute-force approach
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
    }
    return count;
}

int goodPairs(vector<int> &nums,int n){  // optimal approach
    int ans=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }

    for(auto it:m){
        int val=it.second;
        ans=ans+(val*(val-1)/2);
    }
    return ans;
}


int main()
{
    vector<int> nums = {1, 1, 1, 1};
    int n = nums.size();
    cout << goodPairs(nums, n) << " ";
    return 0;
}