#include <bits/stdc++.h>
using namespace std;

class test
{
    private:
    char name[100];

    public:
     
     void set()
     {
         cout<<"enter a name\n";
         cin>>name;
     }

     void get()
     {
         cout<<name;
     }

     test operator + (test t2)
     {
      test t3;
      strcpy(t3.name, name);
      strcat(t3.name, " ");
      strcat(t3.name, t2.name);

      return t3;
     
     }

};


int main()
{
    test t1, t2, t3;
    t1.set();
    t2.set();

    t3=t1+t2;    // t3=t1.add(t2);
    t3.get();

return 0;
}