/* abs function return positive integer */

#include <bits/stdc++.h>
using namespace std;

int test(int num1, int num2)
{
   int val1, val2;
   val1=abs(num1-100);
   val2=abs(num2-100);

   return (num1==num2?0:(val1<val2?num1:num2));
  
}

int main()
{
    int num1,num2;
    cout<<"enter two number\n";
    cin>>num1>>num2;
    cout<<test(num1, num2);

  
return 0;
}