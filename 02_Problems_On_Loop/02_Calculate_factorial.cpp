
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
    int num;
    cout<<"enter a number\n";
    cin>>num;

    cout<<"factorial of "<<num<<" is "<<Factorial(num);

return 0;
}