#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    
    list<int> n(5,100);
    cout<<"printing n"<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(4);
    l.push_front(8);
    
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<"size of list"<<l.size()<<endl;
    

}