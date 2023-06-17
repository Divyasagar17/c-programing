#include<iostream>
using namespace std;
class abc{
    public:
    void func (int x){
        cout<<"\nvalue of int"<<x;
    }
    void func (double x){
        cout<<"\nvalue of double x";
    }
    void func (int x,int y){
        cout<<"\nvalue of x&y is"<<x<<y;
    }
    };
    int main(){
        abc a;
        a.func(7);
        a.func(6.759);
        a.func(7,9);
    }
