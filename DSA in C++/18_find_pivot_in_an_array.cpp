#include<iostream>
using namespace std;
/*

            9
            |
    7       |
            |
            |                3
            |
            |       2
            |
            1  (pivot)
*/
int getPivot(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(a[mid]>=a[0])
            s=mid+1;
        else
            e=mid;
    }
    return s;
}
int main()
{
    int a[5]={7,9,1,2,3};
    cout<<"Pivot is:"<<getPivot(a,5)<<endl;
}