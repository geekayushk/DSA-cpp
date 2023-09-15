//Vector is a dynamic array.elements are stored in contagious memory location.
//as soon as the vector fills upto its size, it doubles its sizes by creating a new vector automatically of double the size of vector created.
//by copying the elements of the previous vector into newly created vector and will dump the previous vector.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //a newly created vector has size zero.

    vector<int> v;

    //Alternate to intialize vector array
    vector<int> a(5,1);              //a(size, intialize all space with 1, otherwise default 0)

    cout<<"print a"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //Copy a whole array into another
    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;




    //capacity means total memory allocated for the elements.
    //size means total elements present.

    cout<<"Capacity-->"<<v.capacity()<<endl;

    //pushing the element into vector

    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl; 

    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl; 

    //double its size
    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity-->"<<v.capacity()<<endl; 

    cout<<"Size-->"<<v.size()<<endl;

    cout<<"Element at 2nd Index"<<v.at(2)<<endl;
    cout<<"front:"<<v.front()<<endl;
    cout<<"end:"<<v.back()<<endl;
    
    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    
    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    cout<<"before clear capacity "<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    cout<<"after clear capacity "<<v.capacity()<<endl;
}