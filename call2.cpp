#include<iostream>
using namespace std;
int square(int *n){
    *n*=*n;
    return *n;
}
int main()
{
    int n1=8,sq;
    //call by reference
    sq=square(&n1);
    cout<<sq;
    return 0;
}