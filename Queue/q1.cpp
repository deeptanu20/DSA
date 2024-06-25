//  queue  in STL

#include <bits/stdc++.h>

using namespace std;

void printQueue(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    printQueue(q);

    cout << endl;

    cout << q.size() << endl;

    cout << "Back Element is :" << q.back() << endl;

    q.pop();

    cout << "After Poping the front element of the queue is :" << q.front() << endl;

    cout<<q.back();

    return 0;
}