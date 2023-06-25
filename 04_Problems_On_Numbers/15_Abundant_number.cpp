#include <bits/stdc++.h>
using namespace std;   //18=1+2+3+6+9 if the sum of divisior is greater than than num

bool isAbudant(int num)
{
    int sum=0;

   for(int i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;

    }

    if(sum>num)
    return true;
    else 
    return false;

}

int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;
    if(isAbudant(num))
    cout<<num<<" is a Abudant number\n";
    else 
    cout<<num<<" is not a Abudant number\n";

return 0;

}