// lower -> upper 
//upper ->  lower

#include<bits/stdc++.h>
using namespace std;

void LowetoUpper(char word[10]){

    int pos=0;


    for(char i=0;i<strlen(word);i++){
        if(word[i]>='A' && word[i]<='Z'){
            continue;
        }
        else{
              pos= word[i] -'a';
              word[i]= pos + 'A';
        }

        
    }
    cout<<word<<"";
}




void UppertoLower(char word[10]){

    int pos1=0;


    for(char i=0;i<strlen(word);i++){
        if(word[i]>='a' && word[i]<='z'){
            continue;
        }
        else{
              pos1= word[i] -'A';
              word[i]= pos1 + 'a';
        }

        
    }
    cout<<word<<"";
}







int main(){
    
   char word[10]={'A','p','P','l','E','\0'};
    LowetoUpper(word);

    cout<<endl;
    
    UppertoLower(word);
}