#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, rem, i, j;
    cout<<"enter a number\n";
    cin>>num;
     
     int temp;
    for(i=0;i<10;i++)
    {
        temp=0;
        cout<<"The frequency of "<<i<<" is ";

        for(j=num;j>0;j=j/10)
        {
        rem=j%10;
        if(rem==i)
        {
        temp++;
        }
        }
      
      cout<<temp<<endl;
    }

return 0;
}