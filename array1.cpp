#include<iostream>
using namespace std;
int main(){

    int n=10;
    int arr[n]={5,15,25,-25,11,15,95,195,295,395};
    int search,i;
    cout<<"enter the element to search";
    cin>>search;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==search)
        {
            cout<<"element found";
            return 0;
        }
    }
    cout<<"element is not found";
}

