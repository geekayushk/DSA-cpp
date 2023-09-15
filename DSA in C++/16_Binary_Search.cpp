#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
    int first=0;
    int last=n-1;
    int mid=(first+last)/2;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(key==a[mid])
            return mid;
        if(key>a[mid])
            first=mid+1;
        else
            last=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result=binarysearch(a,n,10);
    cout<<"index:"<<result<<endl;

}