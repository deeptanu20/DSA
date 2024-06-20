// product of last k element

#include <bits/stdc++.h>
using namespace std;

int ProductKElement(int arr[], int n, int k)
{
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }

    int ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans = ans * st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int k = 1;

    cout << "Product of Last K element: " << ProductKElement(arr, n, k) << " ";
    return 0;
}