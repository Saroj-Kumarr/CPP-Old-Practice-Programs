#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return (a+b);
}

float sum(float a, float b)
{
    return(a+b);
}

float sum(float a, int b)
{
    return(a+b);
}

int sum(int a, int b, int c)
{
    return (a+b+c);
}

float sum(float a, float b, int c)
{
    return (a+b+c);
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(10.5f,5.5f)<<endl;
    cout<<sum(10.5f,5)<<endl;
    cout<<sum(10,5,10)<<endl;
    cout<<sum(10.5f, 5.5f, 10)<<endl;
  
return 0;
}