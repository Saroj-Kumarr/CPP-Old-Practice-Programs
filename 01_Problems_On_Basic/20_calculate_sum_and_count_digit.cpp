#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int x, y;
    cout<<"enter two numbers\n";
    cin>>x>>y;

    int sum=x+y;
    int count=0;

    int temp=sum;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
     
    cout<<" sum is "<<sum<<endl;
    cout<<"total digits of sum is "<<count;

return 0;
}