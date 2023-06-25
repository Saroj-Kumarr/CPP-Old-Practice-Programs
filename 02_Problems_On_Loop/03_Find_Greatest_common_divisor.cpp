#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"enter two numbers\n";
    cin>>num1>>num2;

    for(int i=min(num1,num2);i>=1;i--) 
    {
        if(num1%i==0 && num2%i==0)
        {
            cout<<"Gcd is "<<i;
            exit(0);
        }
    }

    return 0;
}