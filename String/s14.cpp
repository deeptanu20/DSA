#include <bits/stdc++.h>
using namespace std;

vector<char>twoCharacter(string s)
{
    int n = s.length();
    char s1, s2;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s1 = s[i];
        }
    }

    vector<char> v;
    vector<char> ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s1)
        {
            v.push_back(s[i]);
        }
    }

    for (int j = 0; j < v.size(); j+=2)
    {
        if (v[j] != v[j + 2])
        {
            s2 = v[j + 1];
            break;
           
        }
    }

    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] != s2)
        {
            ans.push_back(v[j]);
        }
    }

    return ans;
}

int main()
{
    string s = "abaacdabd";
    
    vector<char>r=twoCharacter(s);

    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    return 0;
}