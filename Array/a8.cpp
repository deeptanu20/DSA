//First and last position of Element in sorted array

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>&nums,int target){
    vector<int>v;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            v.push_back(i);
            for(int j=n-1;j>=i;j--){
                if(nums[j]==nums[i]){
                    v.push_back(j);
                    break;
                }
            }
           break;
        }
    }
    return v;
}

int main(){
    vector<int>nums={5,7,7,8,8,10};
    int target=8;

    vector<int>ans=searchRange(nums,target);

    for(auto it:ans){
        cout<<it<<" ";
    }

    return 0;
}