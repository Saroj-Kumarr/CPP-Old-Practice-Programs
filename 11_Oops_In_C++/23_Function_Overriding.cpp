#include <bits/stdc++.h>
using namespace std;

class base
{
    public:

    void display()
    {
        cout<<"display of base\n";
    }

};

class derived : public base
{
    public:

    void display()
    {
        cout<<"display of derived\n";
    }

};

int main()
{
    derived d;

    d.display();
  
return 0;
}