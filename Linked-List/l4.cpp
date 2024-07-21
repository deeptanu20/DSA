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

    ListNode *Reverse(ListNode *head)  // 3-pointer approach
    {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *curr = head;
        ListNode *prev = NULL;

        if (head->next == NULL)
        {
            return head;
        }
        ListNode *n = head->next;

        while (curr != NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = n;
            if (n != NULL)
            {
                n = n->next;
            }
        }
        return prev;
    }
};