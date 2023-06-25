#include <bits/stdc++.h>
using namespace std;

class base
{
    public :

    virtual void fun1()=0;
    virtual void fun2()=0;

};

class derived : public base
{
    public:

    void fun1()
    {
        cout<<"fun1 of derived \n";
    }

    void fun2()
    {
        cout<<"fun2 of derived \n";
    }

};

int main()
{
    derived d;

    d.fun1();
    d.fun2();
  
return 0;
}