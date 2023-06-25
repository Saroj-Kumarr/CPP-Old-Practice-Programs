#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float principle,rate,time,finalamount,compound_interest;
cout<<"enter principle rate and time\n";
cin>>principle>>rate>>time;
finalamount=principle*pow((1+rate/100),2);
compound_interest=finalamount-principle;
cout<<"final amount is "<<finalamount<<endl;
cout<<"compond interest is "<<compound_interest;
  
return 0;
}