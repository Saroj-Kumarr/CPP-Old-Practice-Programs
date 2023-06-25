#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num={5,4,3,1,2};
    
    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;

    cout<<"Size of vector is "<<num.size()<<endl;  //-----------------> size()
    cout<<"Capacity of vector is "<<num.capacity()<<endl;   //------------> capacity()
    
    vector <int> num1={1,2,3,4,5};
    
    for(const int &i : num1)
    cout<<i<<" ";
    cout<<endl;

    num1.clear();               //-------------->clear()

    for(const int &i : num1)
    cout<<i<<" ";

    cout<<num.empty()<<endl;     //------------->empty()
    cout<<num1.empty()<<endl;   

    int f=num.front();            //------------->front()
    int b=num.back();             //-------------->back()
    
    cout<<f<<endl;
    cout<<b<<endl;

    sort(num.begin(), num.end());   //----------->sort() in ascending order
     
    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;

    reverse(num.begin(), num.end());  //----------->reverse()

    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;

    vector <int> num4={30,20,10,50,40};

    for(const int &i : num4)
    cout<<i<<" ";
    cout<<endl;

    sort(num4.rbegin(), num4.rend());   //sort() in descending order

    for(const int &i : num4)
    cout<<i<<" ";
    cout<<endl;


return 0;
}