#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
} 