#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
     rectangle(int l=0, int b=0)
    {
        setLength(l);
        setBreadth(b);
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

class cuboid : public rectangle
{
    private:
    int height;

    public:
     cuboid(int l=0, int b=0, int h=0)
     {
         height=h;
         setLength(l);
         setBreadth(b);
     }

     void setHeight(int h)
     {
      height=h;
     }

     int getHeight()
     {
         return height;
     }
    
    int volume()
    {
        return (getLength()*getBreadth()*height);
    }

};

int main()
{
cuboid c(10,5,5);

cout<<"volume is "<<c.volume()<<endl;

c.setLength(5);
c.setBreadth(2);
c.setHeight(3);

cout<<"volume is "<<c.volume()<<endl;
  
return 0;
}