
#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{

int n;
cout<<"Enter a number\n";
cin>>n;

if(IsPrime(n))
 cout<<n<<" is a Prime number\n";
else
 cout<<n<<" is not a Prime number\n"; 
return 0;
}