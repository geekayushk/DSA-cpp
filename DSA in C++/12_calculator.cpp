#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    int a,b;
    int ch;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<a+b;break;
        case 2:cout<<a-b;break;
        case 3:cout<<a*b;break;
        case 4:cout<<a/b;break;
        default:cout<<"select valid opertaion";
    }
}