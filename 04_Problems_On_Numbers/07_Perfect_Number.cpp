#include <bits/stdc++.h>
using namespace std;     //6=1+2+3 sum of all divisior is equal to that num 


bool IsPerfect(int x)
{
int sumofdivisior=0;

for(int i=1;i<x;i++)
{
    if(x%i==0)
    sumofdivisior=sumofdivisior+i;
}

if(sumofdivisior==x)
return true;
else
return false;

}

int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;

    if(IsPerfect(num))
    cout<<num<<" is a perfect number\n";
    else
    cout<<num<<" is not a perfect number\n";  
  
return 0;
}