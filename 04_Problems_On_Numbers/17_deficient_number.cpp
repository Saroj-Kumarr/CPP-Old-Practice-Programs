#include <bits/stdc++.h>
using namespace std;  //15=1+3+5  if the sum of divisior is less than than num

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
    int num;
    cout<<"enter a number\n";
    cin>>num;
    
    if(IsDeficient(num))
    cout<<num<<" is a Deficient number\n";
    else 
    cout<<num<<" is not a Deficient number\n";

return 0;

}