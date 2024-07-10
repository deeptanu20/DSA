// climbing stairs
#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1001, -1);

int climbStairs(int N)
{

    if (dp[N] != -1)
    {
        return dp[N];
    }

    if (N <= 2)
    {
        return dp[N] = N;
    }

    return dp[N] = climbStairs(N - 1) + climbStairs(N - 2);
}
int main()
{
    int N = 4;
    cout << climbStairs(N);
    return 0;
}