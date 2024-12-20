#include <bits/stdc++.h>
using namespace std;

vector<int> nSL(vector<int> &arr)
{
    int n = arr.size();
    vector<int> left;
    stack<pair<int, int>> st1;
    for (int i = 0; i < n; i++)
    {
        if (st1.size() == 0)
        {
            left.push_back(-1);
        }
        else if (st1.size() > 0 && st1.top().first < arr[i])
        {
            left.push_back(st1.top().second);
        }
        else
        {
            while (st1.size() > 0 && st1.top().first >= arr[i])
            {
                st1.pop();
            }

            if (st1.size() == 0)
            {
                left.push_back(-1);
            }
            else
            {
                left.push_back(st1.top().second);
            }
        }
        st1.push({arr[i], i});
    }

    return left;
}

vector<int> nSR(vector<int> &arr)
{
    int n = arr.size();
    vector<int> right;
    stack<pair<int, int>> st2;
    for (int i = n-1; i >= 0; i--)
    {
        if (st2.size() == 0)
        {
            right.push_back(7);
        }
        else if (st2.size() > 0 && st2.top().first < arr[i])
        {
            right.push_back(st2.top().second);
        }
        else
        {
            while (st2.size() > 0 && st2.top().first >= arr[i])
            {
                st2.pop();
            }

            if (st2.size() == 0)
            {
                right.push_back(7);
            }
            else
            {
                right.push_back(st2.top().second);
            }
        }
        st2.push({arr[i], i});
    }

    reverse(right.begin(), right.end());

    return right;
}

int maximumAreaofHistogram(vector<int> &arr)
{

    int n = arr.size();

    vector<int> left = nSL(arr);
    vector<int> right = nSR(arr);

    int ans = INT_MIN;
    vector<int> width(n), area(n); 

    for (int i = 0; i < n; i++)
    {
        width[i] = right[i] - left[i] - 1;
    }

    for (int i = 0; i < n; i++)
    {
        area[i] = width[i] * arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, area[i]);
    }

    return ans;
}

int main()
{
    vector<int> arr = {6, 2, 5, 4, 5, 1, 6};

    cout << "ans is " << maximumAreaofHistogram(arr) << " ";
}