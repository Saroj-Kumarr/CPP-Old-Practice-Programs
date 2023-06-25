#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, count=0;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            for(k=1;k<=4;k++)
            {
              if(k!=i && k!=j && j!=i)
              {
                  cout<<i<<j<<k<<" ";
                  count++;
              }

            }
        }
    }

    cout<<"\ntotal digit is "<<count;

return 0;
}