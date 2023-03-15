//find out p rais to the power q ,using recursion 
#include<iostream>
using namespace std;

int pow(int p,int q){
    if(q==0){
        return 1;
    }
    return (p * pow(p,q-1));
}
int main(){
    int ans = pow(2,3);
    cout<<ans;
}