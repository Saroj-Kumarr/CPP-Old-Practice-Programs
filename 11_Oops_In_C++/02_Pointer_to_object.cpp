#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return (length*breadth);
    }

    int perimeter()
    {
        return (2*(length+breadth));
    }

};


int main()
{
//object is created in stack memory
  rectangle r;
  rectangle *p;
  p=&r;

  p->length=10;
  p->breadth=20;

  cout<<"area is "<<p->area()<<endl;
  cout<<"perimeter is "<<p->perimeter()<<endl;

//object is created in heap memory
  rectangle *ptr=new rectangle;

  ptr->length=20;
  ptr->breadth=30;

  cout<<"area is "<<ptr->area()<<endl;
  cout<<"perimeter is "<<ptr->perimeter()<<endl;




  
return 0;
}