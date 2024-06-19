// kth largest element

#include <bits/stdc++.h>
using namespace std;

int KthLargest(int arr[], int k, int n)
{

  sort(arr, arr + n);

  return arr[(n - k)];
}

int main()
{
  int k = 2;
  int n = 6;
  int arr[] = {3, 2, 1, 5, 6, 4};

  cout << "The kth largest element is: " << KthLargest(arr, k, n);

  return 0;
}