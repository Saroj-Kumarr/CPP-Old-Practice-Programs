#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:

     rectangle()                    //non parameterized constructor
    {
      length=0;
      breadth=0;
    } 

     rectangle(int l, int b)    // parameterized constructor 
    {
        setLength(l);
        setBreadth(b);
    }

     rectangle(rectangle &r4)       // copy constructor 
    {
        length=r4.length;
        breadth=r4.breadth;
    }

    void setLength(int l)
     {
        if(l>=0)
        length=l;
        else 
        length=1;
     }

    void setBreadth(int b)
     {
        if(b>=0)
        breadth=b;
        else 
        breadth=1;
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
    rectangle r;

    cout<<"area is "<<r.area()<<endl;
    cout<<"perimeter is "<<r.perimeter()<<endl;


    rectangle r2(20,30);

    cout<<"area is "<<r2.area()<<endl;
    cout<<"perimeter is "<<r2.perimeter()<<endl;


    rectangle r3(r2);

    cout<<"area is "<<r3.area()<<endl;
    cout<<"perimeter is "<<r3.perimeter()<<endl;

return 0;
}