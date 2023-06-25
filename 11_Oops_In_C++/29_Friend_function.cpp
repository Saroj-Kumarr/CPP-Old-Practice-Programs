#include <bits/stdc++.h>
using namespace std;

class test
{
    private:
      int a;
    protected:
      int b;
    public:
      int c;

    friend void fun();

};

void fun()
{
    test t;
    t.a=10;
    t.b=20;
    t.c=30;

    cout<<t.a<<endl;

}

int main()
{

 fun();
  
return 0;
}