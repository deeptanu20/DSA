// valid parenthesis
#include <bits/stdc++.h>
using namespace std;
bool validParenthesis(string s)
{
    unordered_map<char, char> m;
    m[')'] = '(';
    m['}'] = '{';
    m[']'] = '[';

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == m[s[i]])
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (st.size() == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    string s = "{([)]}";

    cout<<"is valid parenthesis "<<validParenthesis(s)<<" ";
    return 0;
}