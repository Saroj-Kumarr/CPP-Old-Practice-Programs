#include<iostream>
#include<cstring>
using namespace std;
void decimal_to_hexadecimal(int num)
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
    cout<<"enter a decimal number\n";
    cin>>num;
    decimal_to_hexadecimal(num);
    
    return 0;
}
