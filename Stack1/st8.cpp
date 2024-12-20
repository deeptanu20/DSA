//next smallest element to left
#include<bits/stdc++.h>
using namespace std;
vector<int>nextSmallestElement(vector<int>&arr){
    int n=arr.size();
    vector<int>ans;
    stack<int>st;

    for(int i=0;i<n;i++){
        if(st.size()==0){
            ans.push_back(-1);
        }

        else if(st.size()> 0 && st.top()< arr[i]){
            ans.push_back(st.top());

        }
        else{
            while(st.size()>0 && st.top()>=arr[i]){
                 st.pop();
            }

            if(st.size()==0){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }

    return ans;
}



int main(){
    vector<int>arr={5,3,2,6,1,4,7};
    vector<int>v=nextSmallestElement(arr);

    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;

}