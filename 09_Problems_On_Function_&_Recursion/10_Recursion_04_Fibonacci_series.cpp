#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return(Fibonacci(n-1)+Fibonacci(n-2));

    
}

int main()
{
  int n;
  cout<<"enter a number\n";
  cin>>n;

  for(int i=0;i<n;i++)
  {
      cout<<Fibonacci(i)<<" ";
  }

return 0;
}