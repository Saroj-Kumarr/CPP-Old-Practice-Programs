#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;

    int hours=num/60;
    int minutes=num%60;

    cout<<hours<<" hours "<<minutes<<" minutes ";
  
return 0;
}