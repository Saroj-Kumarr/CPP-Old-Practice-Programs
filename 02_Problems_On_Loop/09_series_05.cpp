#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nth_Term;
    float sum=0;
    cout<<"enter nth_Term\n";
    cin>>nth_Term;
    
    for(int i=1;i<=nth_Term;i++)
    {    
        float d=1/(float)i;
        cout<<1<<" / "<<i<<" = "<<d<<endl;
        sum=sum+d;
    }

    cout<<"sum of above series is  "<<sum;
    
return 0;
}