#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:

    void fun1()
    {
        cout<<"fun1 of Base class\n";
    }

    void fun2()
    {
        cout<<"fun2 of Base class\n";
    }

};

class Derived : public Base
{
    public:
    
    void fun3()
    {
        cout<<"fun3 of Derived class\n";
    }

    void fun4()
    {
        cout<<"fun4 of Derived class\n";
    }

};


int main()
{
    Derived d;
    Base *ptr=&d;

   ptr->fun1();
   ptr->fun2();

  //  ptr->fun3();    //    using base class pointer we can't access the functions of derived class
  //  ptr->fun4();
  
return 0;
}