// min stack 

#include<bits/stdc++.h>
using namespace std;

void minStack(int arr[],int n){
    stack<int>st,ans;

    for(int i=0;i<n;i++){
        if(ans.empty() || ans.top()>arr[i]){
            ans.push(arr[i]);
        }
        st.push(arr[i]);
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }

}



int main(){
    int n=5;
    int arr[n]={18,19,29,15,16};
      
    minStack(arr,n);

     return 0;
}