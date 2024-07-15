#include<bits/stdc++.h>
using namespace std;

int pealIndex(vector<int>&arr){
   
    stack<int>st;
     int n=arr.size();
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(arr[i]);
        }
        else if(st.top()<arr[i]){
            st.push(arr[i]);
        }
        else{
            return i-1;
            break;
        }
        
    }
    
}

int main(){
    vector<int>arr={5,10,20,15};
    cout<<pealIndex(arr)<<" ";
    

    return 0;
}