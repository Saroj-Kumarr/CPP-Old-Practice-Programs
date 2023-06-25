#include<iostream>
using namespace std;

class square;

class rectangle{

    private:
    int height;
    int width;

    public:
   
   friend void display(rectangle,square);

   void setdata(){
    cout<<"Enter height : ";
    cin>>height;
    cout<<"Enter width : ";
    cin>>width;
   }

};

class square{

    private:
    int side;

    public:
     
    friend void display(rectangle,square);

    void setdata(){
        cout<<"Enter side : ";
        cin>>side;
    }

};

void display(rectangle r,square s){

   float areaOfRectangle = r.height * r.width;
   float areaOfSquare = s.side*s.side;

    cout<<"Area of rectangle is : "<<areaOfRectangle<<endl;
    cout<<"Area of square is : "<<areaOfSquare<<endl;

}
                    
int main(){

    rectangle r;
    r.setdata();

    square s;
    s.setdata();

    display(r,s);

return 0;
}