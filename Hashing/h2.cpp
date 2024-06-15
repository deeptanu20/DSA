#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
     
    // insertion in unordered_set

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20);

   //iterate the whole set
    for(auto it :s){
        cout<< it<<endl;
    }

    // for (auto it = s.begin(); it!=s.end();it++);
    //    cout<<(*it)<<endl;

    cout<<endl;

    cout<<"Size of the unordered_set is :"<<s.size()<<endl;

    // s.clear();  //clear the whole set

    // cout<<"Size of the unordered_set is :"<<s.size()<<endl;

    //find the key

      int key = 20;
     if(s.find(key) == s.end()){
        cout<<"Key Not Found"<<endl;
     }
     else{
        cout<<"Key  Found"<<endl;
     }

     //delete an element in unordered_set

  int deleted_key=20;

  s.erase(deleted_key);

  for(auto it: s){
    cout<< it<<endl;
  }

  //count func

  if(s.count(10)){
    cout<<"Key present"<<endl;
  }else{
    cout<<"Not found"<<endl;
  }

}