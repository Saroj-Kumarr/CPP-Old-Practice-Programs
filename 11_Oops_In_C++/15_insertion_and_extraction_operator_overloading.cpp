#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
     int real;
     int ima;

    public:
      

      friend istream& operator >> (istream &in, Complex &c);
    
      friend ostream& operator << (ostream &out, Complex &c);
      

};

istream& operator >> (istream &in, Complex &c )
{
    cout<<"enter value of real and imaginary part\n";
     in>>c.real>>c.ima;

     return in;
}

ostream& operator << (ostream &out, Complex &c)
{
   out<<c.real<<"+i"<<c.ima;
   
   return out;
}


int main()
{
    Complex c;
    
    cin>>c;
    cout<<c;
  
return 0;
}