#include <bits/stdc++.h>
using namespace std;

bool IsHarshad(int x)
{
    int num=x;
    int sum=0;

    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
        
    }

    if(x%sum==0)
    return true;
    else
    return false;

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
        if(IsHarshad(i))
        cout<<i<<endl;
    } 
  
return 0;
}