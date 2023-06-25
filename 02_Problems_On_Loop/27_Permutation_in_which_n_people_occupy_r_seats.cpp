#include <bits/stdc++.h>
using namespace std;

int Factorial (int x )
{
  int fact=1;
  
  for(int i=1;i<=x;i++)
  {
      fact=fact*i;
  }

  return fact;
}

int main()
{
    int num, r;
    cout<<"enter a number\n";
    cin>>num;
    cout<<"enter value of r seat";
    cin>>r;
    
    cout<<"total seats occupy will be "<<Factorial(num)/(num-r);
;
  
return 0;
}