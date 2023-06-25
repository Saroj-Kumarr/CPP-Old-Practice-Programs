#include <bits/stdc++.h>
using namespace std;

int test(int x, int y)
{
  int count1=0;
  int num=x;
  while(num!=0)
  {
      num=num/10;
      count1++;
  }

  int sum=x+y;
  int temp=sum;
  int count2=0;

  while(temp!=0)
  {
      temp=temp/10;
      count2++;
  }
   if(count1==count2)
   return sum;
   else
   return x;

}

int main()
{    
    int num1, num2;
    cout<<"enter two number\n";
    
    cin>>num1>>num2;
    cout<<test(num1, num2);
  
return 0;
}