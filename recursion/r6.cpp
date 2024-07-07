// delete middle element from stack

#include<bits/stdc++.h>
using namespace std;

int deleteMiddle(stack<int>&st,int n){
    stack<int>s;
     int count=0;
     while(count!=n/2){
        s.push(st.top());
        st.pop();
        count++;
     }

     st.pop();
    
     while(!s.empty()){
        st.push(s.top());
        s.pop();
     }

}

void print(stack<int>&st){
          while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
          }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int n=st.size();

    cout<<deleteMiddle(st,n);
    cout<<endl;
    print(st);
    

    return 0;
}