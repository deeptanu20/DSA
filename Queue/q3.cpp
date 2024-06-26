// reverse first k elements of queue
#include <bits/stdc++.h>
using namespace std;

void print(queue<int> ans)
{
    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }
}

void reverseKElem(queue<int> q, int k)
{

    stack<int> st;

    queue<int> ans;

    while (k != 0)
    {                                             // insert k element in stack
        st.push(q.front());
        q.pop();
        k--;
    }
    while (!st.empty())
    {                                         // insert the reverse element in ans
        ans.push(st.top());
        st.pop();
    }

    while (!q.empty())
    {
        ans.push(q.front());           // insert the remaining element in ans
        q.pop();
    }

    print(ans);
}

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    int k = 3;

    reverseKElem(q, k);

    return 0;
}