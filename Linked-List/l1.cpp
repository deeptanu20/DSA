#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
    }
};

void deleteNode(ListNode *node)
{
    swap(node->data, node->next->data);
    ListNode *temp = node->next;
    node->next = node->next->next;
    delete temp;
}
