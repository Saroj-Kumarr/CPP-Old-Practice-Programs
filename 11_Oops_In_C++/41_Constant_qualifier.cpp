#include <bits/stdc++.h>
using namespace std;

class demo
{
public:
   int x=20;
   int y=20;

   void display() const // we can not modify value inside the display function
   {
       cout<<x<<endl;
   }

};

void fun(const int &x , const int &y)
{
 cout<<x<<endl;
 cout<<y<<endl;
}

int main()
{
    const int x=10;
    const int *p1=&x;
    int y=20;
    p1=&y;

    int a=10;
    const int *p2=&a;
    int b=20;
    p2=&b;

   int i=10, j=20;
   int *const p3=&i;
   (*p3)++;

   int m=10, n=20;
   const int *const p4=&m;
   
   fun(10,20);
  
return 0;
}