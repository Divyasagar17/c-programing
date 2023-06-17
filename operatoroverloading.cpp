#include<iostream>
using namespace std;
class abc{
    public:
    void func(int x){
        cout<<"\n\nvalue of int"<<x;
    }
    void func(double x,double y){
        double z=x+y;
        cout<<"\n\nvalue of string"<<z;
    }
    void func(int x,int y){
        int z=x+y;
        cout<<"\n\nvalue of z is"<<z;
    }
};
int main(){
    abc a;
    a.func(5);
    a.func(2.5,5.2);
    a.func(5,6);
    return 0;
}