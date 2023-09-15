#include<iostream>
using namespace std;
int getmin(int a[],int n)
{
    int mini= 1000;

    for(int i=0;i<n;i++)
    {
        mini=min(mini,a[i]);
        // if(a[i]<min)
        //     min=a[i];
    }
    return mini;
}
int getmax(int a[],int n)
{
    int maxi= -1;

    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
        // if(a[i]>max)
        //     max=a[i];
    }
    return maxi;
}
int main()
{
    int size;
    cin>>size;
    int a[1000];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Maximum value is"<<getmax(a,size)<<endl;
    cout<<"Minimum value is"<<getmin(a,size)<<endl;
}