#include<iostream>
using namespace std;
void reverse( int arr[],int n)
{
    int start=0,end=n-1,a;
    while(start<end)
    {
     a=arr[start];
     arr[start]=arr[end];
     arr[end]=a;
     start++;
     end--;
    } 
}
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
return 0;
}