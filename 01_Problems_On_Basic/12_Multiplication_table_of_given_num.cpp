#include <bits/stdc++.h>
using namespace std;

void Table(int x)
{
    for(int i=1;i<=10;i++)
    {
        cout<<x<<" X "<<i<<" = "<<x*i<<endl;
    }

}

int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;
    Table(num);
  
return 0;
}