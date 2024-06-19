// kth largest element using maxheap(priority queue)

#include<bits/stdc++.h>
using namespace std;

int kthLargestElement(vector<int>nums,int k){

   priority_queue<int>pq(nums.begin(),nums.end());

   int ans=0;

   while(k!=0){
    ans=pq.top();
    pq.pop();
    k--;
   }

   return ans;

}



int main(){
    int k=2;
    vector<int>nums={3,2,1,5,6,4};

    cout<<" The kth largest element will be: "<<kthLargestElement(nums,k);

    return 0;
}