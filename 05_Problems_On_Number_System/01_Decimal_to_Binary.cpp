
#include <iostream>

using namespace std;

void Decimal_to_binary(int num)
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
cout<<"enter a decimal number\n";
cin>>num;
Decimal_to_binary(num);

    return 0;
}