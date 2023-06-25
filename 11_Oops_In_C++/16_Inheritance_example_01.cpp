#include <bits/stdc++.h>
using namespace std;
class test
{
    public:
    int a;
    int b;

  void set_a_and_b()
  {
      cout<<"enter value of a and b\n";
      cin>>a>>b;
  }

  int add()
  {
      return (a+b);
  }

};

class test2 : public test
{
    public:
    int c;

    void set_c()
    {
        cout<<"enter value of c\n";
        cin>>c;
    }

    int product()
    {
        return(a*b*c);
    }
};

int main()
{
 test2 t;
 t.set_a_and_b();
 t.set_c();

 cout<<t.add()<<endl;
 cout<<t.product()<<endl;

 
  
return 0;
}