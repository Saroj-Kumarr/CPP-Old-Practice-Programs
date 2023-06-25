#include <bits/stdc++.h>
using namespace std;

class car
{
    public:

    virtual void fun()
    {
        cout<<"car is started \n";
    }
};

class Innova : public car
{
    public:

    void fun()
    {
        cout<<"Innova is started \n";
    }
};

class Swift : public car
{
    public:

    void fun()
    {
        cout<<"Swift is started \n";
    }
};



int main()
{
    car *c=new Innova();

    c->fun();

        c=new Swift();

    c->fun();

return 0;
}