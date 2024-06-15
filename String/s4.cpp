// reverse a character array


#include<bits/stdc++.h>
using namespace std;

void reverseString(char str[]){

    int start=0;
    int end=strlen(str)-1;

    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }



}

int main(){
  
    char str[]="Deeptanu";
     reverseString(str);

     cout<<"Reverse the string is :"<<str;

    return 0;
}