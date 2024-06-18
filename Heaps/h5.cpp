//  Build Heap

#include <bits/stdc++.h>
using namespace std;

void maxHeap(vector<int> &arr, int size, int i)
{
    int left = ((2 * i) + 1);
    int right = ((2 * i) + 2);
    int parent = (i - 1) / 2;

    int largest = i;

    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (i != largest)
    {
        swap(arr[i], arr[largest]);
        maxHeap(arr, size, largest);
    }
}

void buildHeap(vector<int> &arr, int size)
{

    int lastidx = (size - 2) / 2;

    for (int i = lastidx; i >= 0; i--)
    {
        maxHeap(arr, size, i);
    }
}

void heapSort(vector<int>&arr, int size)
{

    buildHeap(arr, size);

    for (int i = size - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeap(arr, size, 0);
    }
}

int main()
{
    vector<int> arr = {10, 15, 50, 4, 20};
    int size = arr.size();

    buildHeap(arr, size);

    for (int i = 0; i <= (size / 2) - 1; i++)
    {

        maxHeap(arr, size, i);
    }

    cout << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After Heap sort the array will be " << endl;

    heapSort(arr, size);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}