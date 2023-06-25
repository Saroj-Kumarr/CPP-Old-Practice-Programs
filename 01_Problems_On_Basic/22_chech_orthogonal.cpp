#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    int y[4];

    for(int i=0;i<4;i++)
    {
     cout<<"enter x"<<(i+1)<<" and y"<<(i+1)<<endl;
     cin>>x[i]>>y[i];
    }

    if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0])==0)
    cout<<"it's orthogonal\n";
    else
    cout<<"it's a not a orthogonal\n";

    return 0;

}