//given a number n.Find the sum of natural numbers till n but with alternate signs
#include<iostream>
using namespace std;
int f(int n){
    //base case
    if(n==0) return 0;

    return f(n-1) + ((n%2==0)?(-n):(n));
}
int main(){
    cout<<f(5);
    return 0;
}