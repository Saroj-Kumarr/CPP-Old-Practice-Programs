#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, nTerm, sum=0, m,n,p=-1;
    cout<<"enter value of x\n";
    cin>>x;
    cout<<"enter value of nTerm\n";
    cin>>nTerm;

    sum=x;
    cout<<sum;

    for(int i=1;i<nTerm;i++)
    {
        m=pow(x, (2*i+1));
        n=m*p;
        cout<<n<<endl;
        sum=sum+n;
        p=p*(-1);
    }

    cout<<"sum of above series is "<<sum;
  
return 0;
}