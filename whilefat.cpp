#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
     fact=fact*i;
     i=i+1;
    }
    cout<<fact;
    return 0;
}