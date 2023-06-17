#include<iostream>
using namespace std;
int main()
{
    int n,r=1;
    cout<<"enter n";
    cin>>n;
    while(r<=n)
    {
          int c=1;
        while(c<=n)
      {
         cout<<r;
         c=c+1;
      }
        cout<<endl;
        r=r+1;
    }
}