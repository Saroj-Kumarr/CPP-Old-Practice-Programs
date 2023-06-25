#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int fact=1;

    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}

bool IsStrong(int x)
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
    int min, max;
    cout<<"enter minimum number\n";
    cin>>min;
    cout<<"enter maximum number\n";
    cin>>max;

    for(int i=min;i<=max;i++)
    {
        if(IsStrong(i))
        cout<<i<<endl;


    }
  
return 0;
}