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

    bool palindrome(ListNode * head){
        ListNode * temp=head;
        stack<int>st;
        while(temp!=NULL){
            if(st.empty()|| st.top()!=temp->data){
                st.push(temp->data);
                temp=temp->next;
            }else{
                st.pop();
                temp=temp->next;
            }
        }
        if(st.size()== 0){
            return true;
        }
        return false;
    }
};