// count how many times lower case vowel occured in a string.

#include<bits/stdc++.h>
using namespace std;
int CountVowel(string str){

    int count=0;
    for(int i=0;i<str.length();i++){
        int idx=(str[i]-'a');

        if(idx == 0 || idx==4 || idx ==8 || idx==14 || idx ==20){
            count+=1;
        }
        
    }
    
    return count;
}

int main(){
    string str="Deeptanu";
    int ans=CountVowel(str);

    cout<<"No of vowel :"<<ans<<endl;

    return 0;
}