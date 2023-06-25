#include <bits/stdc++.h>
using namespace std;

bool IsArmstrong(int x)
{
    int count=0;
    int temp1=x;
    int temp2=x;
    int sumofpower=0;
    int rem;


    while(temp1!=0)  //for counting digits
    {
        temp1=temp1/10;
        count++;

    }

    while(temp2!=0)  //for sum of cube of all digit
    {
        rem=temp2%10;
        sumofpower=sumofpower+pow(rem,count);
        temp2=temp2/10;
    }
    
    if(sumofpower==x)
    return true;
    else
    return false;

}

int main()
{
    
    int min, max;
    cout<<"enter minimum number\n";
    cin>>min;
    cout<<"enter maximum number\n";
    cin>>max;

    for(int i=min;i<=max;i++)
    {
        if(IsArmstrong(i))
        cout<<i<<endl;


    }
  
return 0;
}