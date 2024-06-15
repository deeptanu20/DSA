#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> map;
    vector<int> v;
    int a[] = {89, 24, 75, 11, 23};
    int b[] = {89, 2, 23};
    int n = 5;
    int m = 3;

    for (int i = 0; i < n; i++)
    {
        map[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        map[b[i]]++;
    }

    for (auto i = map.begin(); i != map.end(); i++)
    {
        if (i->second > 1)
        {
            cout << "Intersection of two array is :" << i->first << endl;
            v.push_back(i->first);
        }
    }
    cout<<"Size of the array is :"<<v.size()<<endl;;
}