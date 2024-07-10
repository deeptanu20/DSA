#include<bits/stdc++.h>
using namespace std;
int NthFibbonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return NthFibbonacci(n-1)+NthFibbonacci(n-2);
}
int main(){
    int n=6;
    cout<<"Nth Fibbonacci number is: "<<NthFibbonacci(n)<<" ";
    return 0;
}