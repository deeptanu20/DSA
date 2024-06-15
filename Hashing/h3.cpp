#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<string>s;

    s.insert("a");
    s.insert("b");
    s.insert("c");
    s.insert("d");

    // for(auto i:s){
    //     cout<< i <<" "<<endl;

    // }

    for(auto i =s.begin();i!=s.end();i++ ){
        cout<<(*i)<<endl;
    }

   string key ="c";

    if(s.find(key)== s.end() ){
        cout<<" Key Found"<<endl;
    }
    else{
           cout << "Key not found"<<endl;
    }

    cout<<"size is "<<s.size()<<endl;

    s.erase("b");
    for(auto i: s){
        cout<<i<<" "<<endl;
    }
    cout<<s.size()<<endl;


    s.clear();

    cout<<"Latest size after clear "<<s.size()<<endl;
    
}