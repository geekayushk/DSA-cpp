#include<iostream>
using namespace std;
int main()
{
    int a[10],n,minindex;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minindex])
                minindex=j;
        }
        swap(a[i],a[minindex]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}