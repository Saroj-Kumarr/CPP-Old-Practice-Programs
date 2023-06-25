#include <iostream>
using namespace std;

void Binary_to_decimal(int num)
{
    int rem, Decimal_num=0, temp=1;
    
    while(num!=0)
    {
        rem=num%10;
        Decimal_num=Decimal_num+rem*temp;
        temp=temp*2;
        num=num/10;
    }
    
    cout<<"Decimal number is "<<Decimal_num;
}

int main()
{
    int num;
    cout<<"enter a binary number\n";
    cin>>num;
    Binary_to_decimal(num);

    return 0;
}
