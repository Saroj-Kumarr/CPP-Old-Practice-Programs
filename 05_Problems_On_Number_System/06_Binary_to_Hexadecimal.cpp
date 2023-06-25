#include <iostream>
#include <cstring>
using namespace std;


int Binary_to_decimal(int num)
{
    int rem, Decimal_num=0, temp=1;
    
    while(num!=0)
    {
        rem=num%10;
        Decimal_num=Decimal_num+rem*temp;
        temp=temp*2;
        num=num/10;
    }
    
    return Decimal_num;
}


void Binary_to_hexa_decimal(int num)
{
    int rem;
   string Hexa_decimal="";
   char All_Hexa_decimal[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 
    while(num!=0)
    {
        rem=num%16;
        Hexa_decimal=All_Hexa_decimal[rem]+Hexa_decimal;
        num=num/16;
    }
    
    cout<<"Hexa decimal number is "<<Hexa_decimal;
    
}



int main()
{
    int num;
    cout<<"enter a binary number\n";
    cin>>num;
    Binary_to_hexa_decimal(Binary_to_decimal(num));

    return 0;
}

