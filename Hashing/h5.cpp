#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int>m;
    int n=9;
    int arr[n]={1,2,3,8,5,1,3,6,5};

    for(int i=0;i<n;i++){
        m[arr[i]]++;

    }

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}