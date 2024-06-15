#include<bits/stdc++.h>
using namespace std;

int main(){


    string n="Deeptanu";

    cout<<""<<n;
    cout<<endl;
    cout<<n.length()<<endl;

    for(char i=0;i<n.length();i++){
        cout<<n[i]<<" ";
    }
cout<<endl;

    // function of string

    cout<<"******"<<endl;
    
    string str1="Deep";
    string str2="tanu";

    str1.append(str2);

    cout<<str1;

    cout<<"******"<<endl;

    //character array

    char str[8] = {'a','b','c','f','y','\0'}; //we can use strlen when char array ends with '\0'
    int ans;

    for(char i=0;i<strlen(str);i++){
            ans=(str[i]-'a');
              cout<<ans<<" ";
    }

  


    return 0;
}