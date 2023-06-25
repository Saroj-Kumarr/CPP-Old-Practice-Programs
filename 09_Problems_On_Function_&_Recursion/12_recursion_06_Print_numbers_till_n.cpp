#include <bits/stdc++.h>
using namespace std;

void Print_Increasing(int n)
{
    if(n==0)
    {
        return;
    }

   Print_Increasing(n-1);

   cout<<n<<" ";
}


void Print_Decreasing(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<" ";

   Print_Decreasing(n-1);
   
}

int main()
{
    int n;
    cout<<"enter a number\n";
    cin>>n;

    Print_Increasing(n);

    cout<<endl;
    
    Print_Decreasing(n);
  
return 0;
}