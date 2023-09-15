#include<iostream>
using namespace std;
int main()
{ 
    int n;
    bool isPrime=1;
    cout<<"Enter the no."<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime==1)
    {
        cout<<"is a prime no."<<endl;
    }
    else{
        cout<<"not a prime no."<<endl;
    }
}