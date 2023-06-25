#include <bits/stdc++.h>
using namespace std;
int main()
{
     int bin1, bin2;
     cout<<"enter 1st and 2nd binary number \n";
     cin>>bin1>>bin2;

    int r=0;
    int arr[20];
    int i=0;

    while(bin1!=0 || bin2!=0 )
    {
       arr[i++]=(bin1%10+bin2%10+r)%2;
        r=(bin1%10+bin2%10+r)/2;

        bin1=bin1/10;
        bin2=bin2/10;

    }
    i--;
   while(i>=0)
   cout<<arr[i--];


  
return 0;
}