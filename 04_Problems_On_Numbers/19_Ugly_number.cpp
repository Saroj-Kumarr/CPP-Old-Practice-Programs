#include <bits/stdc++.h>
using namespace std;   //all prime factors should be 2,3 and 5 only

bool IsUgly(int num)
{
    while(num!=1)
    {
       if(num%5==0)
       num=num/5;
       else if(num%3==0)
       num=num/3;
       else if(num%2==0)
       num=num/2;
       else
       return false;
    }

    return true;

}

int main()
{
    int num,x=0;
    cout<<"enter a number\n";
    cin>>num;

    if(IsUgly(num))
    cout<<num<<" is an ugly number\n";
    else
    cout<<num<<" is not an ugly number\n";
  
return 0;
}
