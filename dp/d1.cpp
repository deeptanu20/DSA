// Fibbonacci number using dp array
#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000, -1);
int NthFib(int n)
{

    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (n == 0 || n == 1)
    {
        return dp[n] = n;
    }
    return dp[n] = NthFib(n - 1) + NthFib(n - 2);
}

int main()
{
    int n = 6;
    cout << NthFib(n);
    return 0;
}