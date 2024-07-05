// power of number
#include <bits/stdc++.h>
using namespace std;
long long power(int N, int R)
{
    int MOD=1e9+7;   //due to overflow

    if (R == 0)
    {
        return 1;
    }
    else if(N ==0){
        return 0;
    }
    return(N%MOD * (power(N, R - 1))%MOD)%MOD; //due to overflow of large number
}
int main()
{
    int N = 10;
    int R = 4;

    cout << power(N, R) << endl;
    return 0;
}