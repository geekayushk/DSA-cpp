#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(5);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_back(9);
    d.push_back(7);
    cout<<"element at index 1:"<<d.at(0);
    cout<<"front:"<<d.front();
    cout<<"back:"<<d.back();
    cout<<"empty or not:"<<d.empty();

    cout<<"before erase:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase:"<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<endl;
    }
}