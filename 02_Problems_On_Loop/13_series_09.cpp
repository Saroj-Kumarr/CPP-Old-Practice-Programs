#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nth_term;
    float sum=0, temp, m;
    
    cout<<"enter nth_term\n";
    cin>>nth_term;
    
    for(int i=1; i<=nth_term; i++)
    {
      if(i<9)
         m=.1;
      else
         m=.01;

         temp=i+((i+1)*m);
         sum=sum+temp;   
         cout<<temp;

         if(i<nth_term)
         cout<<" + ";

    }

    cout<<"\nsum of above series is "<<sum;
  
return 0;
}