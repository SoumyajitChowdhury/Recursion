#include<iostream>
using namespace std;

int pow_rec(int p,int q){
    if(q==0){
        return 1;
    }
    return (p * pow_rec(p,q-1));
}

int f(int n,int d){
    //base case
    if(n==0) return 0;
    return pow_rec(n%10,d)+ f(n/10,d);
}
int main(){

    int n;
    cout<<"Enter number to check palindrom : "<<endl;
    cin>>n;

    int no_of_digits = 0;
    int temp = n;
    while(temp>0){
        temp = temp/10;
        no_of_digits++;
    }

    int result = f(n,no_of_digits);
    if(result == n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}