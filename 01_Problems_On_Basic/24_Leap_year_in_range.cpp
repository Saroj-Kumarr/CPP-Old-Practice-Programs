#include <bits/stdc++.h>
using namespace std;

bool Isleapyear(int year)
{

  if(year%400==0)
  return true;
  else if(year%100==0)
  return false;
  else if(year%4==0)
  return true;
  else
  return false;

}

int main()
{
    int min, max;
    cout<<"enter min and max numbers\n";
    cin>>min>>max;

    for(int i=min;i<=max;i++)
    {

    if(Isleapyear(i))
    cout<<i<<endl;

    }

return 0;
}