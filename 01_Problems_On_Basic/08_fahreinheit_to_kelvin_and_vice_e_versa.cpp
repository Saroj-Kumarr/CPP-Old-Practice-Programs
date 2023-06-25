#include <bits/stdc++.h>
using namespace std;
void Fahreinheit(double k)
{
  double f=(k-273.15)*9/5+32;
  cout<<"fahreinheit of kelvin "<<k<<" is "<<f<<endl;
}

void Kelvin(double f)
{
 double k=(f-32)*5/9+273.15;
cout<<" kelvin of fahreinheit "<<f<<" is "<<k;
}

int main()
{
  double fahreinheit, kelvin;

   while(1)
   {
     int num;
     cout<<"1.for fahreinheit\n";
     cout<<"2.for kelvin\n";
     cout<<"3.for exit\n";
     cin>>num;

     switch(num)
     {
       case 1:
             cout<<"enter kelvin\n";
             cin>>kelvin;
             Fahreinheit(kelvin);
             
       case 2:
             cout<<"enter fahreinheit\n";
             cin>>fahreinheit;
             Kelvin(fahreinheit);
             
       case 3:
             exit(0);
       default:
              cout<<"invalid input\n";

                           
     }

   }
  
return 0;
}