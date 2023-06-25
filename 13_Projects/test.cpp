#include<iostream>
using namespace std;

int findGcd(int a , int b)
{
    if(b==0)
    return a;

    return findGcd(b,a%b);
}
                    
int main()
{
    cout<<findGcd(10,5);
  
return 0;
}