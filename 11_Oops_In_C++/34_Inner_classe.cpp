#include <bits/stdc++.h>
using namespace std;

class Outer
{
    public:
      int a;
      static int b;

        void display()
        {
            cout<<"display of Outer class"<<endl;
        }

        class Inner
        {
            public:
               void display()
               {
                   b=20;      //inner class can use static member only 
                   cout<<"display of Inner class"<<endl;
               }
        };
        
        Inner i;
};

int Outer:: b=10;


int main()
{
    Outer o;
    o.display();

    Outer::Inner i; 
    i.display();

    cout<<o.b<<endl;
  
return 0;
}