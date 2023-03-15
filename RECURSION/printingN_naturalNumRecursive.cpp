#include<iostream>
using namespace std;

void f(int n){
    if(n<1) return;//base case

    //go and print first n-1 natural numbers-->assumption
    f(n-1);
    cout<<n<<" ";
}
int main(){
    int n = 5;
    f(n);
    return 0;
}