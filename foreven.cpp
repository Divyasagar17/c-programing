#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for( int i=2;i<=n;i++)
    {
        cout<<i<<endl;
        i=i+1;
    }
    
   return 0;
}