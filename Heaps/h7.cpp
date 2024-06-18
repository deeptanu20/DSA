// priority queue

#include<bits/stdc++.h>
using namespace std;

void printPriorityQueue(priority_queue<int>pq){    //maxHeap(default)

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

void printMinPriorityQueue(priority_queue<int>q){

    while(!q.empty()){
        cout<<-q.top()<<" ";
        q.pop();
    }

    cout<<endl;



}




int main(){

    int arr[]={15,10,5};
    int arr1[]={2,6,8};

    priority_queue<int>pq(arr,arr+3);

    cout<<"For MaxHeap ";

    printPriorityQueue(pq);


     
     for(int i=0;i<3;i++){
        arr1[i]=-arr1[i];
     }




    priority_queue<int>q(arr1,arr1+3);

    cout<<endl;

    cout<<"For MinHeap :";

    printMinPriorityQueue(q);

    
  
     
   

   


    return 0;
}