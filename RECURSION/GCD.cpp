#include<iostream>
using namespace std;

int GCD(int a , int b){
    if(b>a) return GCD(b,a);
    if(b==0) return a;//base case
    return GCD(b,a%b);//-->Euclid's Algorithm
}
int main(){
    int x = GCD(40,48);
    cout<<x<<endl;
}
/*Euclid's Algorithm--->If we subtract a smaller number from a larger one,(we can reduce the learger one 
but the GCD will remain same )*/