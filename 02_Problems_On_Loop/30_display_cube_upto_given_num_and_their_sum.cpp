#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum=0;

    cout<<"enter a number\n";
    cin>>num;

    for(int i=1;i<=num;i++)
    {

    int c=pow(i, 3);
    cout<<"cube of "<<i<<" is "<<c<<endl;
    sum=sum+c;
    
    }
  
    cout<<"sum of above cubes is "<<sum;

return 0;
}