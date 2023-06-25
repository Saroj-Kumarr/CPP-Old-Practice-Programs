#include <bits/stdc++.h>
using namespace std;

int division(int a, int b)
{                           //we use try, catch and throw function for communicationg with functions 
                            //like division
    if(b==0)
    {
        throw 404;
    }

    return (a/b);
}

int main()
{
    int x=10, y=0, z;

    try
    {
        z=division(x,y);
        cout<<"value of z : "<<z<<endl;
        
    }
    catch(int e)
    {
      cout<<"division by zero : error code "<<e<<endl;
    }
    
  
return 0;
}