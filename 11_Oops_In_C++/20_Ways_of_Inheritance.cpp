#include <bits/stdc++.h>
using namespace std;

class parent
{
private:
    int a;

protected:
    int b;

public:
     int c;

     void funparent()
     {
         a=10;
         b=20;
         c=30;
     }

};

class child : private parent
{

private:

protected:

public:

void funchild()
{
    a=40;
    b=50;
    c=60;
}

};

class grandchild : public child
{
    public:

    void fungrandchild()
    {
        a=70;
        b=80;
        c=90;
    }

};

int main()
{
  
return 0;
}