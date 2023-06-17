#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int row=n;
    while(1<=row){
        int col=n;
        while(1<=col){
            cout<<row;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
return 0;
}