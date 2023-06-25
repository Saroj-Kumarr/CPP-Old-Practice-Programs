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
    int year;
    cout<<"enter a year\n";
    cin>>year;

    if(Isleapyear(year))
    cout<<year<<" is a leap year\n";
    else
    cout<<year<<" is not a leap year\n";

return 0;
}