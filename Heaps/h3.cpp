#include<bits/stdc++.h>
using namespace std;

void minHeapify(vector<int>&arr,int size,int i){
    int left= ((2*i)+1);
    int right=((2*i)+2);
    int parent=(i-1)/2;

    int smallest=i;
    // condition for left side

    if(left<size && arr[left]<arr[smallest]){
        smallest=left;
    }

    // condition for left side

    if(right<size && arr[right]<arr[smallest]){
        smallest=right;
    }

    if(i!=smallest){
        swap(arr[i],arr[smallest]);
        minHeapify(arr,size,smallest);   //recursive call
    }
}

int extractMin(vector<int>&arr,int&size){
  
  // base case 1
    if(size == 0){
        return -1;
    }
      
      //basecase 2

    if(size == 1){
        size--;
        return arr[0];
    }

    swap(arr[0],arr[size-1]);
    size--;
    for(int i=0;i<=(size/2)-1;i++){
    minHeapify(arr,size,i);
    }
    return arr[size];

}

int main(){

    vector<int>arr={25,35,30,60,40,80,32,100,70,60};

     int size=arr.size();

     

     cout<<"Extract the minimum element :"<<extractMin(arr,size)<<endl;


   cout<<"After extracting minimum element the MinHeap will be :"<<endl;

   for(int i=0;i<=(size/2)-1;i++){

    minHeapify(arr,size,i);

   }


     for(auto i:arr){
        cout<<i<<" ";
     }

    return 0;
}