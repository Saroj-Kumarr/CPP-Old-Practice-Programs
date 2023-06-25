#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p=new int;
    cout<<"enter a number\n";
    cin>>*p;

    cout<<"You have entered "<<*p<<endl;

    int size;
    cout<<"Enter the size of array of pointer\n";
    cin>>size;

    int *ptr=new int[size];

    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    cin>>ptr[i];

    cout<<"Printing array elements\n";
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
  
    delete ptr;


return 0;
}