// subsequence
#include <bits/stdc++.h>
using namespace std;

bool subsequence(string s, string t)
{
    queue<char> q;
    int n = s.length();
    int m = t.length();

    for (int i = 0; i < n; i++)
    {
        q.push(s[i]);
    }
    for (int j = 0; j < m; j++)
    {
        if (q.front() == t[j])
        {
            q.pop();
        }
    }

    if (q.size() == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    string s = "axc";
    string t = "ahbgdc";
    cout << subsequence(s, t);
    return 0;
}