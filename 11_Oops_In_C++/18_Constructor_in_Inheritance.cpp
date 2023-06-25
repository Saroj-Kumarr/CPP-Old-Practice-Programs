#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
    
    Base()
    {
        cout<<"Default of Base\n";
    }

    Base(int x)
    {
        cout<<"parameterized of base "<<x<<endl;
    }

};

class derived : public Base 
{
 public:
  
    derived()
    {
        cout<<"Default of derived\n";
    }

    derived(int a)
    {
        cout<<"parameterized of derived "<<a<<endl;
    }

};

int main()
{

derived d1;

derived d2(10);

  
return 0;
}