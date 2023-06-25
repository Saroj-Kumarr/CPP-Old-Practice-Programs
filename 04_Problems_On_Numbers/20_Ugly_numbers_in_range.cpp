#include <bits/stdc++.h>
using namespace std;

bool IsUgly(int num)
{
    while(num!=1)
    {
       if(num%5==0)
       num=num/5;
       else if(num%3==0)
       num=num/3;
       else if(num%2==0)
       num=num/2;
       else
       return false;
    }

    return true;

}

int main()
{
    int min, max;
    cout<<"enter minimum number\n";
    cin>>min;
    cout<<"enter maximum number\n";
    cin>>max;

    for(int i=min;i<=max;i++)
    {
        if(IsUgly(i))
        cout<<i<<endl;
    } 
  
return 0;
}