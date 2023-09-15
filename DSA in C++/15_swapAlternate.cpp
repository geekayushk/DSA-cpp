#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
    cout<<"After swapping:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void swapAlternate(int a[],int n)
{
    for(int i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
}
int main()
{
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    swapAlternate(a,n);
    printArray(a,n);
}