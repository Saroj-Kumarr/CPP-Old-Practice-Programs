#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
    return 0;
    }
    
    return (n+sum(n-1));
}

int main()
{
    int n;
    cout<<"enter a number \n";
    cin>>n;

    cout<<"sum of natural number 1 to "<<n<<" is "<<sum(n);
  
return 0;
}