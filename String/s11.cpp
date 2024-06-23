#include<bits/stdc++.h>
using namespace std;
int extractSum(string s){

    int ans=0;
    int num=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            ans=ans * 10 + (s[i]-'0');
        }
        else{
            num+=ans;
            ans=0;
        }
    }
    return num+ans;
}

int main(){
    string s="1a4c23geek6";

    cout<<extractSum(s)<<" ";
    
    return 0;
}