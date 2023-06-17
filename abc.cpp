#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"enter the value of n";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"enter not prime";
            break;
            }
    i=i+1;
    }
    if(i==n){
        cout<<"enter prime";
    }
    return 0;
}