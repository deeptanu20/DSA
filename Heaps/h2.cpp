//heapify

#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int size,int i){

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
        heapify(arr,size,smallest);   //recursive call
    }

    

}
int main(){

 vector<int>arr={40,20,30,35,25,80,32,100,70,60};

 int size= arr.size();

 for(int i=0;i<=(size/2)-1;i++){
    heapify(arr,size,i);
 }

 cout<<"after heapify "<<endl;

 for(auto i:arr){
    cout<<" "<<i;
 }





    return 0;
}