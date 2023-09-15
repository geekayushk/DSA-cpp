#include<iostream>
using namespace std;
int main()
{
    int i,j;
    // char ch=65;
    for(i=1;i<=4;i++)
    {
    // char ch=65;
        for(j=1;j<=4;j++)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            // ch++;
        }
        
        cout<<endl;
    }
}