//House Robber
#include<bits/stdc++.h>
using namespace std;


vector<int>dp(1001,-1);
int rob(vector<int>&nums,int n){

  
    if(n <=0){
        return  0;
     }

       if(dp[n]!=-1){
        return dp[n];
    }
     int amount_1=rob(nums,n-1);
     int amount_2=rob(nums,n-2)+nums[n-1];

     return dp[n]= max(amount_1,amount_2);


}

int main(){
     int n=5;
    vector<int>nums={2,7,9,3,1};
   cout<<"Maximum amount is "<<rob(nums,n);
    return 0;
}
