#include <bits/stdc++.h>
using namespace std;

bool IsDeficient(int num)
{
    int sum=0;

   for(int i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;

    }

    if(sum<num)
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
        if(IsDeficient(i))
        cout<<i<<endl;
    } 
  
return 0;
}