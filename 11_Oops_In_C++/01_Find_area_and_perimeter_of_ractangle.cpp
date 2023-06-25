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
rectangle r1, r2;
r1.length=10;
r1.breadth=5;

r2.length=10;
r2.breadth=20;

cout<<"area of r1 data "<<r1.area()<<endl;
cout<<"Perimeter of r1 data "<<r1.perimeter()<<endl;

cout<<"area of r1 data "<<r2.area()<<endl;
cout<<"Perimeter of r1 data "<<r2.perimeter()<<endl;

return 0;
}