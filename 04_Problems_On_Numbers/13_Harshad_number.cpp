#include <bits/stdc++.h>
using namespace std;     //18=8+1 if the num is divisible by sum of the digit

bool isHarshad(int x)
{
    int num=x;
    int sum=0;

    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
        
    }

    if(x%sum==0)
    return true;
    else
    return false;

}

int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;

    if(isHarshad(num))
    cout<<num<<" is a harshad number\n";
    else 
    cout<<num<<" is not a harshad number\n";

return 0;

}