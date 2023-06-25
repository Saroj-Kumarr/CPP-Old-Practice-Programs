#include<iostream>
using namespace std;

class A{
    

    private:
    int x;
     int y;

     protected:
     int v;

    public:

    int w;

     
    A (){
        x=10;
        y=20;
    }

    int getdata1(){

        return (x+y);
    }

};

class B:protected A{
    int z;

    public:

    void setdata(){
        cout<<"ener value of z"<<endl;
        cin>>z;
    }

    void getdata(){
        cout<<w<<endl;
        cout<<v<<endl;
        cout<<"value of x + y "<<getdata1()<<endl;
        
    }

};

class C:public B{
    int z;

    public:

    void setdata(){
        cout<<"ener value of z"<<endl;
        cin>>z;
    }

    void getdata(){
        cout<<v<<endl;
        cout<<w<<endl;
        cout<<"value of x + y "<<getdata1()<<endl;
        
    }

};


                    
int main(){

    A a;
    a.getdata1();

    B b;
    b.setdata();
    b.getdata();

    C c;
    c.getdata();

  
return 0;
}