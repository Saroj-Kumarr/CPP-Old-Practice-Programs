#include <bits/stdc++.h>
using namespace std;

class shape
{
    public:

    virtual float area()=0;
    virtual float perimeter()=0;

};

class rectangle : public shape
{
    private:
      float length;
      float breadth;

    public:

    rectangle (float l=0.0, float b=0.0)
    {
      length=l;
      breadth=b;
    }

    float area()
    {
        return (length*breadth);
    }

    float perimeter()
    {
        return (2*(length+breadth));
    }

};

class circle : public shape
{
    private:
      float radius;

    public:

    circle (float r=0.0)
    {
      radius=r;
    }

    float area()
    {
        return (3.14*radius*radius);
    }

    float perimeter()
    {
        return (2*3.14*radius);
    }

};

int main()
{
    rectangle r(10,5);

    cout<<"area of rectangle : "<<r.area()<<endl;
    cout<<"perimeter of perimeter : "<<r.perimeter()<<endl;

    circle c(10);

    cout<<"area of circle : "<<c.area()<<endl;
    cout<<"perimeter of circle : "<<c.perimeter()<<endl;
  
return 0;
}