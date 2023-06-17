#include<iostream>
using namespace std;
int add(int a, int b)
{
    int sum=a+b;
    return sum;
}

     int main()
 {
    int x,y,z;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"entyer the value of y";
    cin>>y;
    z=add(x,y);
    cout<<"sum'1'===>"<<z;
    int c,d,e;
    cout<<"enter the value of c";
    cin>>c;
    cout<<"enter the value of d";
    cin>>d;
    e=add(c,d);
    cout<<"sum'2'===>"<<e;
    return 0;
}