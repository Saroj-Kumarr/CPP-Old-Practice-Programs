#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
      int length;
      int breadth;

    public:
         void setLength(int l)
         {
             if(l>=0)
             length=l;
             else 
             length=0;
         }

         void setBreadth(int b)
         {
             if(b>=0)
             breadth=b;
             else 
             breadth=0;
         }

         int getLength()
         {
             return length;
         }

         int getBreadth()
         {
             return breadth;
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
    r.setLength(10);
    r.setBreadth(5);

    cout<<"area is "<<r.area()<<endl;
    cout<<"perimeter is "<<r.perimeter()<<endl;
  
return 0;
}