// copy random linkedlist
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *random;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandom(Node *head)
    {
        Node *temp = head;

        unordered_map<Node *, Node *> m;

        while (temp != NULL)
        {
            m[temp] = new Node(temp->data);
            temp = temp->next;
        }

        temp = head;
        while (temp != NULL)
        {
            m[temp]->next = m[temp->next];
            m[temp]->random = m[temp->random];
            temp = temp->next;
        }
        return m[head];
    }
};