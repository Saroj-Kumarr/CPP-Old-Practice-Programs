#include <bits/stdc++.h>
using namespace std;     //145=1+1*2*3*4+1*2*3*4*5 factorial of its digits is equal to that num
int factorial(int num)
{
    int fact=1;

    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }

    return fact;
}

bool IsStrongNum(int x)
{ 
    int num=x;
    int sum=0;
    int rem;
  
    while(num!=0)
    { 
        rem=num%10;
        sum=sum+factorial(rem);
        num=num/10;
    }

if(sum==x)
return true;
else
return false;

}


int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;

    if(IsStrongNum(num))
    cout<<num<<" is a strong number\n";
    else
    cout<<num<<" is not a strong number\n";

  
return 0;
}