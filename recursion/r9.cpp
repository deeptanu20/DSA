// Decode ways
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
        int numDecodings(string s,int pos){
            int n=s.length();

           if(pos==n){  // base case1
               return 1;
           }

           if(s[pos] == '0'){ // base case 2
            return 0;
           }
           

           int count=numDecodings(s,pos+1); // take 1 word
            if(pos > (n-1) && s.substr(pos,2)<"27"){
                count+=numDecodings(s,pos+2); //take 2 word
            }

            return count;

        }





};








int main(){
    return 0;
}