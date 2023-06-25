#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int nth_Term, sum=0;
    cout<<"enter nth_Term\n";
    cin>>nth_Term;

    int temp=9;

    for(int i=1;i<=nth_Term;i++)
    {
     sum=sum+temp;
     cout<<temp<<" ";
     temp=temp*10+9; 
    }

    cout<<"\nsum of the above series is "<<sum;

return 0;
}