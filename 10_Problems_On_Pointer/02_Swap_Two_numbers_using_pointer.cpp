#include <bits/stdc++.h>
using namespace std;

void Swap(int *x, int *y)
{
int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
  int x, y;
  cout<<"enter value of x\n";
  cin>>x;

  cout<<"ener value of y\n";
  cin>>y;

  cout<<x<<" "<<y<<endl;

  Swap(&x, &y);

  cout<<x<<" "<<y<<endl;
  
return 0;
}