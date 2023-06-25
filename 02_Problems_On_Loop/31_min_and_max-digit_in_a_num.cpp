#include <bits/stdc++.h>
using namespace std;

void Min_and_Max(int num)
{
    int min=INT_MAX ,max=INT_MIN ,rem;

    while(num!=0)
     {
         rem=num%10;
         if(max<rem)
         max=rem;
         if(min>rem)
         min=rem;
         num=num/10;
         
     }
     cout<<"maximum digit is "<<max<<endl;
     cout<<"minimum digit is "<<min;

}

int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;
    Min_and_Max(num);

return 0;
}