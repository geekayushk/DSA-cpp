#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;

    // bitwise and(&)
    cout<<"a&b "<<(a&b)<<endl;
    // bitwise or(a|b)
    cout<<"a|b "<<(a|b)<<endl;
    // bitwise not(~a)
    cout<<"~a "<<(~a)<<endl;
    // bitwise xor(a^b)
    cout<<"a^b "<<(a^b)<<endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<2)<<endl;
    cout<<(19<<1)<<endl;
}