#include <bits/stdc++.h>
using namespace std;

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
    int min, max;
    cout<<"enter minimum number\n";
    cin>>min;
    cout<<"enter maximum number\n";
    cin>>max;

    for(int i=min;i<=max;i++)
    {
        if(IsPerfect(i))
        cout<<i<<endl;


    }
  
return 0;
}