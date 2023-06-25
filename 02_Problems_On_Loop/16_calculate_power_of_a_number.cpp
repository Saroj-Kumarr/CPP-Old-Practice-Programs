#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cout<<"enter a number and it's power\n";
    cin>>x>>y;

    int power=1;
    for(int i=1;i<=y;i++)
    {
        power=power*x;
    }  
   cout<<x<<" to the power "<<y<<" is "<<power;

return 0;
}