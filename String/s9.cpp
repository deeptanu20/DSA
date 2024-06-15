//remove consecutive character

#include<bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string str){

    stack<char>st;

    for(int i=0;i<str.length();i++){

        if(st.empty() || st.top()!=str[i]){
            st.push(str[i]);
        }
    }

    string ans="";

    while(!st.empty()){
        char elem=st.top();
        st.pop();
        ans+=elem;
    }

    reverse(ans.begin(),ans.end());

    return ans;

}




int main(){
    string str="aabb";

   cout<< removeConsecutiveCharacter(str)<<" ";



    return 0;
}