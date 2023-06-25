#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int ima;
public:
      Complex(int r=0, int i=0)
      {
          real=r;
          ima=i;
      }

      void get()
      {
          cout<<real<<"+i"<<ima;
      }

  friend Complex operator + (Complex c1, Complex c2);

};

  Complex operator + (Complex c1, Complex c2)
      {
          Complex temp;
          temp.real=c1.real+c2.real;
          temp.ima=c1.ima+c2.ima;

          return temp;

      }


int main()
{
    Complex c1(5,8);
    Complex c2(3,3);
    Complex c3;

    c3=c1+c2;
    
    c3.get();

return 0;
}