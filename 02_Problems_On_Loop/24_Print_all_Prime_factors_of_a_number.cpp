
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;

    for(int i=2;i<=num;i++)
    {

    if(num%i==0)
    {
     cout<<i<<" ";
     num=num/i;
     i--;
    }

    }
  
return 0;
}