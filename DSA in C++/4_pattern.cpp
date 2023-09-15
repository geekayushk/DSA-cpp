#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int count=i;
        for(j=1;j<=5;j++)
        {
            if(i>=j)
            {
                cout<<count<<" ";
                count--;
            }
        }
        cout<<endl;
    }
}