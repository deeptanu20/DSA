#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int *arr;
    int size;

    heap()
    {
        int arr[100];
        size = 0;
    }

    int left(int i)
    {
        return ((2 * i )+ 1);
    }
    int right(int i)
    {
        return ((2 * i) + 2);
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insert(int x)
    {
        size=size+1;
        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << " " << arr[i];
        }
    }
};

int main()
{

    heap h;
    h.insert(10);

    h.insert(80);

    h.insert(15);

    h.insert(120);

    h.insert(90);

    h.insert(16);

    h.insert(12);

    h.print();

    return 0;
}