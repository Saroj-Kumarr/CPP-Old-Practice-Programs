#include <bits/stdc++.h>
using namespace std;
bool test (int num1, int num2, int num3, bool num4)
{
    if(num1<num2 && num2<num3)
    return true;
    else if(num1<=num2 && num2<=num3 && num4==true)
    return true;
    else
    return false;


}

int main()
{
    
    int num1, num2, num3;
    bool num4;
    cout<<"enter three numbers\n";
    cin>>num1>>num2>>num3>>num4;
    cout<<test(num1, num2, num3, num4);
 
return 0;
}