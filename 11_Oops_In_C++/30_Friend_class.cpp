#include <bits/stdc++.h>
using namespace std;

class your;

class my
{
    private:
      int a;

    protected:
      int b;

    public:
      int c;

      friend your;

};

class your
{
    public:

    my m;

    void fun()
    {
    m.a=10;
    m.b=20;
    m.c=30;

    cout<<m.a<<endl;
    cout<<m.b<<endl;
    cout<<m.c<<endl;
    }
  
};

int main()
{
    your y;

    y.fun();
  
return 0;
}