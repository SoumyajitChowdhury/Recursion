#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 or n==1) return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int nth_fib=fib(3);
    cout<<nth_fib<<endl;
    return 0;
}