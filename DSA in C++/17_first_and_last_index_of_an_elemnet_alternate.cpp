#include<iostream>
using namespace std;
int main()
{
    int n,key;
    int a[100000];
    cin>>n;
    cin>>key;
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<i<<endl;
            break;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        if(key==a[j])
        {
            cout<<j<<endl;
            break;
        }
    }

    


}