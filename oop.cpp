#include<iostream>
using namespace std;
class person
{
    int id;
    string name;
    public:
        void setp()
        {
            cout<<"enter the id";
            cin>>id;
            cout<<"enter the name";
            cin>>name;
        }
        void displayp()
        {
            cout<<id<<endl<<name<<endl;
        }       
};
class student: private person
{
    string course;
    int fee;
    public:
        void sets()
        {
            setp();
            cout<<"enter the course";
            cin>>course;
            cout<<"enter the fee";
            cin>>fee;
           }
        void displays(){
            displayp();
            cout<<course<<endl<<fee<<endl;
        }       
};
class professional: private person
{
    string companyn;
    int salary;
    public:
        void setpr()
        {
            setp();
            cout<<"enter the companyn";
            cin>>companyn;
            cout<<"enter the salary";
            cin>>salary;
           }
        void displaypr()
        {
            displayp();
            cout<<companyn<<endl<<salary<<endl;
        }       
};
int main(){
    student s;
    s.sets();
    s.displays();
    professional p;
    p.setpr();
    p.displaypr();
    return 0;
}
