#include <bits/stdc++.h>
using namespace std;

class demo
{
public:
  int *p;

demo()
{
    p=new int[5];
    cout<<"constructor of demo\n";
}

~demo()
{
    delete []p;
    cout<<"destructor of demo\n";
}
  
};


int main()
{
    demo *p=new demo();

    delete p;

return 0;
}