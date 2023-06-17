#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=1;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<sum;
    return 0;
}