// sum of array

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{

    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int n = 7;
    int arr[7] = {1, 2, 12, 4, 5, 8, 3};
    cout << sum(arr, n) << endl;
    return 0;
}