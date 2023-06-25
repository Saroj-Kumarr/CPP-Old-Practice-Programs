#include <bits/stdc++.h>
using namespace std;

class Myexception : public exception
{


};

int division(int a , int b)
{
    if(b==0)
    throw Myexception();

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
    catch(Myexception e)
    {
      cout<<"division by zero : error code 404 "<<endl;
    }
    
  
return 0;
}