// reverse a queue
#include<bits/stdc++.h>
using namespace std;

void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}


void reverse(queue<int>q){
    stack<int>st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    print(q);
}

int main(){

    queue<int>q;
    q.push(2);
    q.push(20);
    q.push(5);
    q.push(15);

     print(q);

     cout<<endl;

    cout<<"After reversing the queue: ";

    reverse(q);

     

    return 0;
}