//Given an array of n integer and a terget value X .Print wheather x exist in array or not
#include<iostream>
using namespace std;

bool f(int *arr,int n,int i,int x){
    //base case
    if(i==n){
        //array is exhusted
        return false;
    }
    return (arr[i]==x) or (f(arr,n,i+1,x));
}
int main(){

    int arr[]={2,5,8,14,10,3};
    int n=6;
    int x=14;
    bool result = f(arr,n,0,x);
    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}