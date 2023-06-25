#include <bits/stdc++.h>
using namespace std;
void Fahreinheit(double c)
{
  double f=(c*9/5)+32;
  cout<<"fahreinheit of celcius "<<c<<" is "<<f<<endl;
}

void Celcius(double f)
{
 double c=(f-32)*5/9;
cout<<" celcius of fahreinheit  "<<f<<" is "<<c;
}

int main()
{
  double fahreinheit, celcius;

   while(1)
   {
     int num;
     cout<<"1.for fahreinheit\n";
     cout<<"2.for celcius\n";
     cout<<"3.for exit\n";
     cin>>num;

     switch(num)
     {
       case 1:
             cout<<"enter celcius\n";
             cin>>celcius;
             Fahreinheit(celcius);
             
       case 2:
             cout<<"enter fahreinheit\n";
             cin>>fahreinheit;
             Celcius(fahreinheit);
             
       case 3:
             exit(0);
       default:
              cout<<"invalid input\n";

                           
     }

   }
  
return 0;
}