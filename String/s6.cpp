// remove consecutive character

#include<bits/stdc++.h>
using namespace std;
 vector<char> removeConsecutive(char str[]){

    vector<char>st;

    for(char i=0;i<strlen(str);i++){
        if(str[i]!=str[i+1]){
            st.push_back(str[i]);
        }
        else if(str[i]==str[i+1]){
            st.push_back(str[i+1]);
        }
    }

    return st;


}

int main(){

    char str[]="Deeptanu";

   vector<char>ans= removeConsecutive(str);

   for(char i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

    return 0;
}

