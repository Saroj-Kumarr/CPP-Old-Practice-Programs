#include <bits/stdc++.h>
using namespace std;

int sum(int a=1, int b=1, int c=1)
{
return (a+b+c);
}

float add(int a=1, float b=1.1)
{
return ((float)a+b);
}

int product (int a=1, int b=1, int c=1)
{
    return (a*b*c);

}

/* 
Invalid
void add(int a, int b = 3, int c, int d);

 Invalid
void add(int a, int b = 3, int c, int d = 4);

 Valid
void add(int a, int c, int b = 3, int d = 4);
*/

int main()
{
    cout<<"sum is "<<sum(10)<<endl;
    cout<<"sum is "<<sum(10,5)<<endl;
    cout<<"sum is "<<sum(10,5,5)<<endl;

    cout<<"add is "<<add(10.5f)<<endl;  //-----> second argument can not be passed without first

    cout<<product(10);
return 0;
}