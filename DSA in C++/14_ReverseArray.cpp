#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
    for(int start=0,end=n-1;start<=end;start++,end--)
    {
        swap(a[start],a[end]);
        // int temp=a[start];
        // a[start]=a[end];
        // a[end]=temp;
    }
}
void printArray(int a[],int n)
{
    cout<<"Reversal array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    reverse(a,n);
    printArray(a,n);

}