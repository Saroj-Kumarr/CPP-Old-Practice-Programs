#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10, y=5, z;

    try
    {
        if(y==0)
        throw 404;

        z=x/y;
        cout<<"value of z : "<<z<<endl;
        
    }
    catch(int e)
    {
      cout<<"division by zero : error code "<<e<<endl;
    }
    
  
return 0;
}