#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int>m;
    int n=8;
    int arr[n]={-1,2,-1,3,2,3,4,7};

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second == 1){
            cout<< "Non Repeating Element is :" <<it->first<<endl;
        }
    }
}