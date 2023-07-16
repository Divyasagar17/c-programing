#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> gi;
    for(int i=0; i<5; i++){
        gi.push_back(i); }
 cout<<"output of begin and end\n";

 for(auto i=gi.begin(); i!=gi.end(); i++){
    cout<<*i<<" ";
 }
  cout<<"\noutput of rbegi and rend\n";
  for(auto j=gi.rbegin(); j!=gi.rend(); j++){
    cout<<*j<<" ";
  }
  cout<<"\noutput of cbegin and cend\n";
  for(auto k=gi.cbegin(); k!=gi.cend(); k++){
    cout<<*k<<" ";
  }
  cout<<"\noutput of crbegin and crend\n";
  for(auto n=gi.crbegin(); n!=gi.crend(); n++){
    cout<<*n<<" ";
  }
 return 0;
}