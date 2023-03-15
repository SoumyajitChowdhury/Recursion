#include<iostream>
using namespace std;
bool f(int num,int *temp){
    //base case
    if(num >= 0 and num <= 9){
        int lastDigitOftemp = (*temp)%10;
        (*temp)/=10;
        return (num == lastDigitOftemp);
    }
    bool result = (f(num/10 , temp) and (num%10) == ((*temp)%10));
    (*temp)/=10;
    return result;
}
int main(){
    int num = 11511;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<f(num,temp); 
}