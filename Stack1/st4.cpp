// Next Greatest integer

#include <bits/stdc++.h>
using namespace std;

int nextGreatestInteger(int arr[], int n)
{
    stack<int> st;
    int ans[n] = {};
    for (int i = 0; i < n; i++)
    {
        int curr_elem = arr[i];

        while (!st.empty() && curr_elem > arr[st.top()])
        {
            ans[st.top()] = curr_elem;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        int top_elem_idx = st.top();
        st.pop();
        ans[top_elem_idx] = -1;
    }
    return ans[n];
}

int main()
{
    int n = 4;
    int arr[n] = {1, 3, 2, 4};
    cout << "Next Greatest elements are: " << nextGreatestInteger(arr, n) << " ";

    return 0;
}