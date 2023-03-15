#include<iostream>
using namespace std;
int fact(int n){
    //basecase
    if(n==1){
        return 1;
    }
    int ans = n * fact(n-1);
    return ans;
}
int main(){
    int result = fact(5);
    cout<<result<<endl;
    return 0;
}