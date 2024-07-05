// print 1 to n

#include <bits/stdc++.h>
using namespace std;

void Print(int N)
{
    if (N == 0)
    {
        return;
    }

    Print(N - 1);
    cout << N << " ";
}

int main()
{
    int N = 10;
    Print(N);
    return 0;
}