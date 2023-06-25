#include <iostream>
using namespace std;


int Octal_to_Decimal(int num)
{
    int rem, Decimal_num=0, temp=1;
    
    while(num!=0)
    {
        rem=num%10;
        Decimal_num=Decimal_num+rem*temp;
        temp=temp*8;
        num=num/10;
        
    }
    return Decimal_num;
}

void Octal_to_Hexadecimal(int num)
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
cout<<"enter a octal number\n";
cin>>num;
Octal_to_Hexadecimal(Octal_to_Decimal(num));

    return 0;
}

