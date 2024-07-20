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

    ListNode *RemoveElem(ListNode *head, int val)
    {
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data == val)
            {
                ListNode *del = temp->next;
                temp->next = temp->next->next;
                delete del;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
};
