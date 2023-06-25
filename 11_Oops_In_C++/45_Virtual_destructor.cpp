#include <bits/stdc++.h>
using namespace std;

class base
{
    public:
    virtual ~base()
     {
         cout<<"base destructor\n";
     }

};

class derived : public base
{
    public:
      ~derived()
      {
          cout<<"derived destructor\n";
      }

};

int main()
{
  base *p=new derived();

  delete p;


return 0;
}