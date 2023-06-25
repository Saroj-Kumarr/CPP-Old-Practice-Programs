#include <bits/stdc++.h>
using namespace std;

class BasicCar
{
    public:

    virtual void start()
    {
        cout<<"Basiccar is started\n";
    }
};

class AdvancedCar : public BasicCar
{
    public:

    void start()
    {
        cout<<"Advancedcar is started\n";
    }

};

int main()
{
    BasicCar *ptr=new AdvancedCar();

    ptr->start();


  
return 0;
}