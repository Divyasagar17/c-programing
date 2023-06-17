#include<iostream>
using namespace std;
int add(int a, int b){
    int sum=a+b;
    return sum;
}
int sub(int a,int b){
    int sub=a-b;
    return sub;
}
int mul(int a,int b){
  int mul=a*b;
  return mul;
}
int division(int a,int b){
int div=a/b;
return div;
}
int modu( int a, int b){
    int fat=a%b;
    return fat;
}
int main(){
    if(choice==1){
       int x,y,result;
       char ask;
       cout<<"enter the no of x";
       cin>>x;
       cout<<"enter the no of y";
       cin>>y;
       result=add(x,y);
       cout<<result;
    }
    if(choice==2){
    int c,d,result;
    cout<<"enter the no of c";
    cin>>c;
    cout<<"enter the no of d";
    cin>>d;
    result=sub(c,d);
    cout<<result;
    }
    if(choice==3){
       int j,k,result;
       cout<<"enter the value of j";
       cin>>j;
       cout<<"enter the value of k";
       cin>>k;
       result=mul(j,k);
       cout<<result;
    }
    if(choice==4){
    int m,n,result;
    cout<<"enter the no of m";
    cin>>m;
    cout<<"enter the no of n";
    cin>>n;
    result=division(m,n);
    cout<<result;
    }
    if(choice==5){
       int p,q,result;
       cout<<"enter the value of p";
       cin>>p;
       cout<<"enter the value of q";
       cin>>q;
       result=modu(p,q);
       cout<<result;
    }
    cout<<"the result is"<< result;
       cout<<"do want to performe more operatio y:yes\n  N:no\n";
       while(true){if(choice==1){
       int x,y,result;
       char ask;
       cout<<"enter the no of x";
       cin>>x;
       cout<<"enter the no of y";
       cin>>y;
       result=add(x,y);
       cout<<result;
    }
    if(choice==2){
    int c,d,result;
    cout<<"enter the no of c";
    cin>>c;
    cout<<"enter the no of d";
    cin>>d;
    result=sub(c,d);
    cout<<result;
    }
    if(choice==3){
       int j,k,result;
       cout<<"enter the value of j";
       cin>>j;
       cout<<"enter the value of k";
       cin>>k;
       result=mul(j,k);
       cout<<result;
    }
    if(choice==4){
    int m,n,result;
    cout<<"enter the no of m";
    cin>>m;
    cout<<"enter the no of n";
    cin>>n;
    result=division(m,n);
    cout<<result;
    }
    if(choice==5){
       int p,q,result;
       cout<<"enter the value of p";
       cin>>p;
       cout<<"enter the value of q";
       cin>>q;
       result=modu(p,q);
       cout<<result;
    }
    while()

       }
    return 0;
}