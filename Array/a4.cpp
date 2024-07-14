#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n)
{

    stack<int> s1;
    stack<int> s2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            s1.push(arr[i]);
        }
        else
        {
            s2.push(arr[i]);
        }
    }

    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }

    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
}

int main()
{
    int n = 5;
    int arr[n] = {0, 1, 0, 3, 12};
    moveZeros(arr, n);
    return 0;
}