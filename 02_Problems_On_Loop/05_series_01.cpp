/* 1/1^1 + 1/2^2 + 1/3^3  */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nth_Term, sum=0;
    cout<<" enter nth_Term\n";
    cin>>nth_Term;

    for(int i=1;i<=nth_Term;i++)
    {
     cout<<1<<" / "<<i<<" ^ "<<i<<" = "<<(1/pow(i,i))<<endl;
     sum=sum+(1/pow(i,i));
    }

    cout<<"sum of the above series is "<<sum;

return 0;
}