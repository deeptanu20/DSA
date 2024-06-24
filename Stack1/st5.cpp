// remove consecutive duplicates
#include<bits/stdc++.h>
using namespace std;
vector<char> removeConsecutiveDuplicate(string s){
    vector<char>v;
    stack<char>st;

    for(int i=0;i<s.length();i++){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
        }else{
            st.pop();
        }
    }
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }

    reverse(v.begin(),v.end());

    return v;
}

int main(){
    string s="azxxzy";

   vector<char>ans= removeConsecutiveDuplicate(s);

   for(auto i:ans){
    cout<<i<<" ";
   }

    


    return 0;
}