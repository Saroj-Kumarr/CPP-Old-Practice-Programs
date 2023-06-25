#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num,reverse=0,rem;
  cout<<"enter a number for reverse\n";
  cin>>num;
 
  while(num!=0)
  {
   rem=(num%10);
   reverse=reverse*10+rem;
   num=num/10;
  }
  cout<<"reverse digits are "<<reverse;
  
return 0;
}