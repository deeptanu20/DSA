#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>&arr,int n){

    sort(arr.begin(),arr.end());
    return arr[n-1];
    
}

int recursionLargest(vector<int>&v,int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return v[n-1];
    }

    int ans=max(v[n-1],recursionLargest(v,n-1));

    return ans;
}
int main(){
    int n=8;
    vector<int>v={1,7,4,9,2,5,4,8};

    cout<<recursionLargest(v,n);

    return 0;
}