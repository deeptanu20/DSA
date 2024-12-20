//stock span problem

#include<bits/stdc++.h>
using namespace std;
vector<int>stockSpan(vector<int>&arr){
    int n=arr.size();
    vector<int>ans;
    stack<pair<int,int>>st; //pair N.g element,idx

    for(int i=0;i<n;i++){
        if(st.size()==0){
            ans.push_back(-1);
        }

        else if(st.size()> 0 && st.top().first > arr[i]){
            ans.push_back(st.top().second);

        }
        else{
            while(st.size()>0 && st.top().first<=arr[i]){
                 st.pop();
            }

            if(st.size()==0){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top().second);
            }
        }
        st.push({arr[i],i});
    }

    for(int i=0;i<ans.size();i++){
        ans[i]=i-ans[i];
    }

    return ans;
}



int main(){
    vector<int>arr={100,80,60,70,60,75,85};
    vector<int>v=stockSpan(arr);

    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;

}