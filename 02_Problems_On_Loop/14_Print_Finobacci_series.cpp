#include <bits/stdc++.h>
using namespace std;

void Fibonacci(int num)
{
int a=-1, b=1, c;
    for(int i=1;i<=num;i++)
    {
      c=a+b;
      cout<<c<<" ";
      a=b;
      b=c;
    }
}


int main()
{
    int nTerm;
    cout<<"enter nterm\n";
    cin>>nTerm;
    Fibonacci(nTerm);
  
return 0;
}