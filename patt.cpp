#include<iostream>
using namespace std;
int main(){

    int n,r=1;
    cout<<"enter the value of n";
    cin>>n;
    while(r<=n)
    {
          int c=1;
          while(c<=n)
       {
          cout<<"*";
          c=c+1;
       }
          cout<<endl;
          r=r+1;
    }
}