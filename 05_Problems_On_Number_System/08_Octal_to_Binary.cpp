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


void Octal_to_Binary(int num)
{
    int Binary_num[50];
    
    int i=0;
    while(num!=0)
    {
        Binary_num[i++]=num%2;
        num=num/2;
    }
    
    for(int j=i-1;j>=0;j--)
    cout<<Binary_num[j];

}


int main()
{
    
int num;
cout<<"enter a octal number\n";
cin>>num;
Octal_to_Binary(Octal_to_Decimal(num));

    return 0;
}

