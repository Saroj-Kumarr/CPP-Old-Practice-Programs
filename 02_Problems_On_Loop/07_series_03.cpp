#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int nth_Term, sum=0;
    cout<<" enter nth_Term\n";
    cin>>nth_Term;

    int i,j;

    for(i=1;i<=nth_Term;i++)
    {
        int tempSum=0;
        for(j=1;j<=i;j++)
        {
          cout<<j;
          tempSum=tempSum+j;
          
        if(j<i)
         cout<<" + ";

        if(j==i)
          cout<<" = ";

        }
        cout<<tempSum<<endl;

        sum=sum+tempSum;
      
    }

    cout<<"sum of the above series is "<<sum;
  
return 0;
}