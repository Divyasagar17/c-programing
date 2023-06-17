#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"this is a vehicle";
    }
};
class fourwheler{
    public:
    fourwheler(){
        cout<<"this has four wheler";
    }
};
class car: public vehicle,public fourwheler{
    public:
     car(){
        cout<<"good music system\n";
        cout<<"good looking\n";
        cout<<"heavy picup\n";
        cout<<"sound like a gi gi gi gi\n";
        
    }
};
int main(){
    car c;
    return 0;
}