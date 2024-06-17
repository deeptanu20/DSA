#include<bits/stdc++.h>
using namespace std;

void  Minheapify(vector<int>&arr,int size,int i){

    int left= ((2*i)+1);
    int right=((2*i)+2);
    int parent=(i-1)/2;

    int smallest=i;

    if(left < size && arr[left]<arr[smallest]){
        smallest=left;
    }
  
      if(right < size && arr[right]<arr[smallest]){
        smallest=right;
    }

    if(smallest != i){
        swap(arr[i],arr[smallest]);
        Minheapify(arr,size,smallest);
    }



}






void decreaseElement(vector<int>&arr,int index,int x){

    
    
    arr[index]=x;
   int size=arr.size();


   
     
     for(int i=(size/2)-1;i>=0;i--){
        Minheapify(arr,size,i);
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
    Minheapify(arr,size,i);
    }
    return arr[size];

}

void DeleteKey(vector<int>&arr,int&size,int index){
    decreaseElement(arr,size,INT_MIN);
    extractMin(arr,size);
}







int main(){
  
  vector<int>arr={10,20,30,40,50,35,38,45};

  int index=3;

  int x=5;

  int size=arr.size();

  decreaseElement(arr,index,x);

   cout<<"After decreasing the key at the index "<<endl; 

  for(auto i:arr){
    cout<<i<<" ";
  }

  cout<<endl;

  cout<<"After deleting the key at the index "<<endl;

   

  DeleteKey(arr,size,index);

  for(auto x:arr){
    cout<<x<<" ";
  }





    return 0;
}