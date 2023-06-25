#include <iostream>
#include <cstring>
using namespace std;


int Hexadecimal_to_Decimal(char num[])
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
   return Decimal_num;
}

void Hexadecimal_to_Octal(int num)
{
    int Binary_num[50];
    
    int i=0;
    while(num!=0)
    {
        Binary_num[i++]=num%8;
        num=num/8;
    }
    
    for(int j=i-1;j>=0;j--)
    cout<<Binary_num[j];
}


int main()
{
char num[20];
cout<<"enter a hexadecimal number\n";
cin>>num;
Hexadecimal_to_Octal(Hexadecimal_to_Decimal(num));

    return 0;
}

