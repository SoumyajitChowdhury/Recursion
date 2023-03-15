//Given an array,print all the elements in array recursively
#include<iostream>
using namespace std;
void f(int *arr,int idx,int n){
        //base case
        if(idx == n) return;
        cout<<arr[idx]<<endl;
        //assume that
        f(arr,idx+1,n);//assume it works correctly --> it will print the remaining array 
    }
int main(){
    int n = 5;
    int arr[]={6,3,2,5,8};
    f(arr,0,n);
    return 0;
} 