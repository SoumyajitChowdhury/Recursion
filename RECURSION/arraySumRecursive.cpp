#include<iostream>
using namespace std;

int f(int *arr,int idx,int n){
 //base case
    if(idx == n-1){
        //we only have one element left,so it is the maximum
        return arr[idx];
    }
    return arr[idx]+f(arr,idx+1,n);
}
int main(){
    int arr[]={2,3,5,6,9};
    int n = 5;
    cout<<f(arr,0,n);
}