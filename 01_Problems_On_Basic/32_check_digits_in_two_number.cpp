#include <bits/stdc++.h>
using namespace std;

bool test(int num1,int num2)
{
  int rem1;
  int rem2;

  while(num1!=0 && num2!=0)
  {
   rem1=num1%10;
   rem2=num2%10;
   num1=num1/10;
   num2=num2/10;

   if(rem1==rem2)
   return true;
  }

return false;

}

int main()
{
    
    int num1, num2;
    cout<<"enter two number under 100\n";
    
    cin>>num1>>num2;
    cout<<test(num1, num2);

return 0;
}