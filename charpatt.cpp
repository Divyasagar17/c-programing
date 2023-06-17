#include<iostream>
using namespace std;
int main()
{
  char n,row='a';
  cout<<"enter n";
  cin>>n;
  while(row<=n)
  {
      char col='a';
      while(col<=n)
    {
        cout<<row;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
  }
  return 0;
}