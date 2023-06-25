#include <bits/stdc++.h>
using namespace std;

class base
{
    public:

    virtual void fun()
     {
         cout<<"fun of base\n";
     }

};

class derived : public base
{
    public:

     void fun()
     {
         cout<<"fun of derived\n";
     }

};


int main()
{
    derived d;

    base *ptr=&d;

    ptr->fun();
  
return 0;
}