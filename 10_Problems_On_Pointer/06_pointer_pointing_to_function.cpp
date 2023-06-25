#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    return a+b;
}

int main()
{
    int x=10, y=20;

    int (*funcptr)(int, int);

    funcptr=add;

    cout<<funcptr(x,y);
    
return 0;
}