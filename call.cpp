#include<iostream>
using namespace std;
int square(int n){

     n*=n;
    return n;

}
int main(){
    int n=8,sq;
    //call by value 
    sq=square(n);
    cout<<sq;
    return 0;
}