#include <bits/stdc++.h>
using namespace std;

bool Isprime(int num)
{
    int i;

    for(i=2;i<num;i++)
    {
    if(num%i==0)
    break;
    }

    if(i==num)
    return true;
    else
    return false;
}

int main()
{
   int num;
   cout<<"enter a number\n";
   cin>>num;

   int i=0, sum=0;
   while(i<num)
   {

   for(int j=2;i<num;j++)
   {
    if(Isprime(j))
    {
     sum=sum+j;
     i++;
    }
   }

   }
   cout<<"sum of prime numbers is "<<sum<<endl;

return 0;
}