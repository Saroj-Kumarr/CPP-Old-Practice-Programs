#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum=0;

    cout<<"enter a number\n";
    cin>>num;
    
    for(int i=1;i<=num;i++)
    {
        cout<<i<<endl;
        sum=sum+i;
    }

    cout<<"sum is "<<sum;

return 0;
}