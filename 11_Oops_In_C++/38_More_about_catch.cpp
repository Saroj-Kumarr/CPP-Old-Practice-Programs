#include <bits/stdc++.h>
using namespace std;

class Myexception1 
{

};

class Myexception2 : public Myexception1
{

};

int main()
{
    try
    {
        throw 10;
    }
    catch(int e)
    {
       cout<<"integer catch\n";
    }

     catch(float e)
    {
       cout<<"float catch\n";
    }
    
    catch(char e)
    {
        cout<<"character catch\n";
    }

    catch(Myexception2 e)
    {
      cout<<"Myexception2 catch\n";
    }

    catch(Myexception1 e)
    {
      cout<<"Myexception1 catch\n";
    }

    catch(...)
    {
        cout<<"all catch\n";
    }
    
  
return 0;
}