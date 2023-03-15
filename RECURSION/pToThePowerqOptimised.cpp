#include<iostream>
using namespace std;

int pow(int p,int q){
    if(q==0) return 1;//base case
    if(q%2==0){//for even
        int result = pow(p,q/2);
        return result*result;
    }
    else{//for odd
        int result = pow(p,(q-1)/2);
        return p*result*result;
    }
}
int main(){
    int ans = pow(2,5);
    cout<<ans<<endl;
}
