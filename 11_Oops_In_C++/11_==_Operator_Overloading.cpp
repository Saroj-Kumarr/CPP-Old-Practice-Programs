#include <bits/stdc++.h>
using namespace std;

class test
{
 private:
  int a;

  public:
  void set()
  {
      cin>>a;
  }

  void operator == (test t2)
  {
      if(a==t2.a)
      cout<<"equal";
      else
      cout<<"not equal";

  }

};

int main()
{
    
test t1, t2;
cout<<"enter value of a for t1 object\n";
t1.set();

cout<<"enter value of a for t2 object\n";
t2.set();

t1==t2;    // t1.add(t2);

    
return 0;
}