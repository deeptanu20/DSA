// valid anagram

#include<bits/stdc++.h>
using namespace std;

bool validAnagram(string str1,string str2){

    

    if(str1.length()!=str2.length()){
        cout<<"Not a valid anagram";
        return false;
    }
    int count[26]={0};

    for(int i=0;i<str1.length();i++){
        count[str1[i]-'a']++;
    }

    for(int i=0;i<str2.length();i++){
        if(count[str2[i]-'a']==0){
        cout<<"Not a valid anagram";
        return false; 

        }
        count[str2[i]-'a']--;
    }

    cout<<"It is a valid anagram";
    return true;

}

int main(){
    string str1="anagram";
    string str2="nagaram";
    validAnagram(str1,str2);

    return 0;
}

