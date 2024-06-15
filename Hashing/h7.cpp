#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
  unordered_set<int> s;
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {1, 4, 6};
  int n = 5;
  int m = 3;

  for (int i = 0; i < n; i++)
  {
    s.insert(a[i]);
  }
  for (int i = 0; i < m; i++)
  {
    s.insert(b[i]);
  }

  cout << "Total size of an array is :" << s.size() << endl;

  for (auto x = s.begin(); x != s.end(); x++)
  {
    cout << (*x) << " " << endl;
  }
}