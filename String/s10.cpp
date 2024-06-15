//determine if two string are close
#include<bits/stdc++.h>
using namespace std;
bool closeString(string word1,string word2){

    //length should be same

    if(word1.length()!=word2.length()){
        cout<<"Not a close string";
        return false;
    }

    //frequency should be same

    int ans1[26]={0};
    int ans2[26]={0};

    for(int i=0;i<word1.length();i++){
        ans1[word1[i]-'a']++;
    }

    for(int i=0;i<word2.length();i++){
        ans2[word2[i]-'a']++;
    }

    // all character should be same

    for(int i=0;i<26;i++){
        if(ans1[i]>0 && !(ans2[i]>0)){
              cout<<"Not a close string";
            return false;
        }
    }

    //sort and if equal return true

      sort(ans1,ans1+26);
      sort(ans2,ans2+26);

     for(int i=0;i<26;i++){
        if(ans1[i]!=ans2[i]){
            cout<<"Not a close string";
            return false;
        }
     }

    cout<<"It is a close string";
     return true;

}



int main(){
    string word1="cabbba";
    string word2="abbccc";

    cout<<" "<<closeString(word1,word2);
    return 0;
}