#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter n";
    cin>>n;
     while(row<=n)
    {
        int col=1,a=row;
        while(col<=row)
      {
        cout<<a;
        a=a+1;
        col=col+1;
      }
       cout<<endl;
       row=row+1;
    }
    return 0;
}