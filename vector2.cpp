#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> gi;
    for(int i=0; i<5; i++){
        gi.push_back(i); }
        gi.resize(15);
 cout<<"output of begin and end"<<endl;
cout<<"size of vector"<<gi.size()<<endl;
cout<<"maximum size of vector"<<gi.max_size()<<endl;
cout<<"capacity of vector"<<gi.capacity()<<endl;
//cout<<"resize of vector"<<gi.resize(25)<<endl;
if(gi.empty()){
    cout<<"true";
}
else
{
    cout<<"false";
}
return 0;
}