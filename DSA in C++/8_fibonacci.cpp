#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0;i<10;i++)
    {
        
        int nextnum=a+b;
        cout<<nextnum<<" ";

        a=b;
        b=nextnum;
    }
}