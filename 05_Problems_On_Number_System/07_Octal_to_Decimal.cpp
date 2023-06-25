#include <iostream>
using namespace std;

void Octal_to_Decimal(int num)
{
    int rem, Decimal_num=0, temp=1;
    
    while(num!=0)
    {
        rem=num%10;
        Decimal_num=Decimal_num+rem*temp;
        temp=temp*8;
        num=num/10;
        
    }
    cout<<"Decimal number is "<<Decimal_num;
}


int main()
{
    
int num;
cout<<"enter a octal number\n";
cin>>num;
Octal_to_Decimal(num);

    return 0;
}
