#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
      cin>>n;
      int a,b;
      cin>>a>>b;
      cout<<endl;
      switch(n)
    {
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        cout<<a/b;
        break;
        case 5:
        cout<<a%b;
        break;
        default :
        cout<<" chal nikal ";
        break;

    }
    return 0;
}