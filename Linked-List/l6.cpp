#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedlistNode
{
public:
    int data;
    SinglyLinkedlistNode *next;

    SinglyLinkedlistNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    SinglyLinkedlistNode *deleteDuplicate(SinglyLinkedlistNode *head)
    {
        SinglyLinkedlistNode *temp = head;

        // if there is no element in answer list
        SinglyLinkedlistNode *ansHead = NULL;
        SinglyLinkedlistNode *ansTail = NULL;
        int frequency = 0;

        while (temp != NULL)
        {
            SinglyLinkedlistNode *i = temp;
            SinglyLinkedlistNode *j = temp;

            if (j != NULL && i->data == j->data)
            { // duplicate
                j = j->next;
                frequency++;
            }
            if (frequency == 1)
            { // unique element
                if (ansHead == NULL && ansTail == NULL)
                { // adding fist element in ans linkedlist
                    ansHead = temp;
                    ansTail = temp;
                }
                else
                {
                    ansTail->next = temp;
                    ansTail = temp;
                }
            }
            temp = j;
        }
        if (ansTail != NULL)
        {
            ansTail->next = NULL;
        }

        return ansHead;
    }
};