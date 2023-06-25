#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }

    return (n*power(n, p-1));
}

int main()
{
    int n;
    int p;
    cout<<"enter value of n "<<endl;
    cin>>n;

    cout<<"enter value of p "<<endl;
    cin>>p;

    cout<<n<<" raised to the power "<<p<<" is "<<power(n,p);
  
return 0;
}