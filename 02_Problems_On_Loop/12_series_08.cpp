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
    
    int nth_Term, x; 
    double sum=1, temp;
    cout<<"enter value of x\n";
    cin>>x;
    cout<<" enter nth_Term\n";
    cin>>nth_Term;

    for(int i=1;i<nth_Term;i++)
    {
     temp=(pow(x,i)/Factorial(i));
     sum=sum+temp;
    }

    cout<<"sum of the above series is "<<sum;

  
return 0;
}