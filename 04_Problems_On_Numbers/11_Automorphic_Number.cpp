#include <bits/stdc++.h>
using namespace std;      //25=625 , 76=5776 if the num is available in the last of the square

bool isAutomorphic(int num)
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
    int num;
    cout<<"enter a number\n";
    cin>>num;

    if(isAutomorphic(num))
    cout<<num<<" is a Automorphic number\n";
    else
    cout<<num<<" is not a Automorphic number\n";
      
  
return 0;
}