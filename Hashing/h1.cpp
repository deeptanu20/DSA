#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string, int> m;

    // insertion
    // 1

    pair<string, int> p = make_pair("Hello", 1);
    m.insert(p);

    // 2

    pair<string, int> q("World", 2);
    m.insert(q);

    cout << m["Hello"] << endl;

    cout << m.at("World") << endl;

    cout << m.size();

    // check present
    cout << endl;

    cout << "Is key present " << m.count("bro");

    // erase

    m.erase("World");
    cout << endl;
    cout << "Size of the is " << m.size();

    //Traversing
  cout<<endl;
    for(auto i :m){
        cout<< i.first << " "<< i.second;
    }

    //iterator
    cout<<endl;
    unordered_map<string,int> :: iterator it =m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

      

    return 0;
}