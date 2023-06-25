#include <bits/stdc++.h>
using namespace std;

int test(int x, int y, int z)
{
   if(x==13)
   return 0;
   else if(y==13)
   return x;
   else if(z==13)
   return x+y;
   else
   return x+y+z;
   
}


int main()
{
    int num1, num2, num3;
    cout<<"enter three number\n";
    
    cin>>num1>>num2>>num3;
    cout<<test(num1, num2, num3);
  
return 0;
}