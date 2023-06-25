#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nth_Term, sum=0;
    cout<<" enter nth_Term\n";
    cin>>nth_Term;

    for(int i=1;i<=nth_Term;i++)
    {
     cout<<i<<" * "<<i<<" = "<<(i*i)<<endl;
     sum=sum+(i*i);
    }

    cout<<"sum of the above series is "<<sum;
  
return 0;
}