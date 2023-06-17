#include<iostream>
using namespace std;
int main()
{
      char ch=1;
      cout<<endl;
      switch(ch)
    {
        case 1:
            cout<<"integer 1";
            break;
        case '1':
            cout<<"char 1";
            break;
        default:
            cout<<"both are equal";

    }
        return 0;

   
}