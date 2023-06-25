#include <bits/stdc++.h>
using namespace std;

bool IsAutomorphic(int num)
{
    int square=num*num;

    while(num!=0)
    {
        if(num%10!=square%10)
        return false;

        num=num/10;
        square=square/10;
    }
    return true;

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
        if(IsAutomorphic(i))
        cout<<i<<endl;
    }
  
return 0;
}