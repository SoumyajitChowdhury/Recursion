#include<iostream>
using namespace std;

string f(string &s,int idx,int n){
    if(idx==n){
        return "";//base case
    }
    string current = "";
    current +=s[idx];
    return ((s[idx]=='a')?"":current)+f(s,idx+1,n);//turnary operation
}
int main(){
    string s = "abcax";
    int n = 5;
    cout<<f(s,0,n);
    return 0;
}
