#include <bits/stdc++.h>
using namespace std;

double Area_Of_Triangle ( double a,  double b,  double c)
{
    double Area, s;
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));

    return Area;
}


int main()
{

 double side1 , side2, side3;
    cout<<"Enter 1st 2nd and 3rd angle of triangle\n";
    cin>>side1>>side2>>side3;

    cout<<"area of triangle is "<<Area_Of_Triangle(side1 , side2, side3);
  
return 0;
}