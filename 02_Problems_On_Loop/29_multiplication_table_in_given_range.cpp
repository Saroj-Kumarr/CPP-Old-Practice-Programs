#include <bits/stdc++.h>
using namespace std;
int main()
{
int min, max;
cout<<"enter two numbers\n";
cin>>min>>max;

for(int i=min;i<=max;i++)
{
    for(int j=1;j<=10;j++)
    {
     cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
    }

    cout<<"\n*******************\n";
}

return 0;
}