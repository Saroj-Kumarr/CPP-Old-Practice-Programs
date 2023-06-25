#include <bits/stdc++.h>
using namespace std;

bool test(int num1, int num2, int num3)
{
    if(num1==num2+num3 || num2==num1+num3 || num3==num1+num2)
    return true;
    else
    return false;

}

int main()
{
    int num1, num2, num3;
    cout<<"enter three numbers\n";
    cin>>num1>>num2>>num3;
    cout<<test(num1, num2, num3);
  
return 0;
}