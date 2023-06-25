#include <bits/stdc++.h>
using namespace std;

class test
{
    private:
    int a;

    public:
    void set()
    {
        cout<<"enter value of a\n";
        cin>>a;
    }

    void get()
    {
        cout<<a<<endl;
    }

    void operator ++ ()
    {
        a=a+2;

    }
        
     void operator -- ()
    {
        a=a-2;
    }


};

int main()
{
    test t;
    t.set();
    t.get();

    ++t;

    t.get();

    --t;

    t.get();
 
return 0;
}