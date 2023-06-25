#include <bits/stdc++.h>
using namespace std;

class test
{
    public:
    int a;
    static int count;

    test ()
    {
        a=10;
        count++;
    }

    static int getcount() //static function can use only static data member like count not a.
    {
        return count;
    }

};

int test::count=0;

int main()
{
    test t1, t2;

    cout<<t1.count<<endl; //access by object name
    cout<<t2.count<<endl; //access by object name

    cout<<test::count<<endl; //access by class name

    cout<<t1.getcount()<<endl;  

    cout<<test::getcount()<<endl; //access by class name

return 0;
}