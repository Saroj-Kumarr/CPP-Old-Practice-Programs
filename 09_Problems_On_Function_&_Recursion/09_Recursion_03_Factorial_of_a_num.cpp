#include <bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if(n==1)
    {
        return 1;
    }

    return (n*Factorial(n-1));
}

int main()
{
    int n;
    cout<<"enter a number \n";
    cin>>n;

    cout<<"Factorial of "<<n<<" is "<<Factorial(n);
  
return 0;
}