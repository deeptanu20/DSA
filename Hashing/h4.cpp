#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,int> m;
    m["leetcode"]=50;
    m["gfg"]=30;
    m["codeforces"]=100;

    // for(auto x: m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    for(auto itr= m.begin(); itr!= m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    string key= "gfg";
      if(m.find(key)== m.end()){


        cout<<"Key not found "<<endl;
      }else{
        auto temp= m.find(key);
        cout<<"Key is "<<temp->first<<endl;
        cout<<"Value is "<<temp->second<<endl;
          cout<<"Key  found "<<endl;
      }

      cout<<"Size of the map is "<<m.size();

      //another way of inserting element 
cout<<endl;
cout<<"*************"<<endl;
     pair<string,int>p =make_pair("HackerRank", 10);

     m.insert(p);

     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
     }

     m.erase("gfg");
     cout<<"***********"<<endl;
          for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
     }

}