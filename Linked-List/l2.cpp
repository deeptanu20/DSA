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
        this->next = NULL;
    }
};

int MiddleNodeI(ListNode *head)
{ // approach-1
    ListNode *temp = head;
    int count = 0;

    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    int mid = count / 2;

    while (mid != 0)
    {
        temp = temp->next;
        mid--;
    }
    return temp->data;
}

int MiddleNodeII(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}
