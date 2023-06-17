#include<iostream>
using namespace std;
int main()
{
int choice,n,p,r,t,i,f=1;
cout<<"enter choice";
cout<<" 1)natural no ,\n2)factorial ,\n3)si ,\n4)pattern ,\n5)r pattern";
cin>>choice;
if(choice==1){
    cout<<"enter the value of n";
    cin>>n;
for(i=1;i<=n;i++){
    cout<<i;
}
}
else if (choice==2){
    
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++){
        f=f*i;

    }
    cout<<f;

} else if(choice==4)
{
cout<<"enter the value of n";
    cin>>n;
    int r=1;
    while(r<=n){
    int c=1;
    while(c<=r){
        cout<<r;
        c=c+1;
    }  r=r+1;
    cout<<endl;
 }
    }
    else if(choice==3){
    int p,r,t,si;
    cout<<"enter the no of p";
    cin>>p;
    cout<<"enter the no of r";
    cin>>r;
    cout<<"enter the no of t";
    cin>>t;
    si=p*r*t/100;
    cout<<si;
    }

return 0;
}