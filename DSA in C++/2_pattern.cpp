#include<iostream>
using namespace std;
int main()
{
    int i,j,count=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}