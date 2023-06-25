#include <iostream>
#include <cstring>
using namespace std;


void Hexadecimal_to_Decimal(char num[])
{
   int rem, Decimal_num=0, temp=1;
   int len=strlen(num);
   
   for(int i=len-1;i>=0;i--)
   {
       if(num[i]>='1'  && num[i]<='9')
       {
           Decimal_num=Decimal_num+(num[i]-48)*temp;
           temp=temp*16;
       }
       else
       {
           Decimal_num=Decimal_num+(num[i]-55)*temp;
           temp=temp*16;
       }
       
   }
   cout<<"Decimal number is "<<Decimal_num;
   
}


int main()
{
    char num [20];
    cout<<"enter a hexadecimal number\n";
    cin>>num;
    Hexadecimal_to_Decimal(num);
    
    return 0;
}

