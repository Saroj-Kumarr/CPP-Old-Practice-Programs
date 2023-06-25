#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
     int length;
     int breadth;

     public:
       rectangle(int length, int breadth)
       {
           this->length=length;
           this->breadth=breadth;
       }

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

rectangle r(10,20);

cout<<"area is "<<r.area()<<endl;
cout<<"perimeter is "<<r.perimeter()<<endl;

return 0;
}