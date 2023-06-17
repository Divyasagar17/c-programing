#include<iostream>
using namespace std;
int main()
{
    int n,reminder,rverse=0;
    cin>>n;
    while(n!=0)
    {
        reminder=n%10;
        rverse=rverse*10+reminder;
        n=n/10;
    }
cout<<rverse;
}