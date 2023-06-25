#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,root1,root2,d;
    cout<<"enter a b and c\n";
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if(d==0)
    {
        cout<<"roots are real and equal\n";
        cout<<-b/(2*a);
    }
    else if(d>0)
    {
        cout<<"roots are real and unequal\n";
        cout<<(-b+sqrt(d))/(2*a)<<endl;
        cout<<(-b+sqrt(d))/(2*a);
    }
    else
    {
    cout<<"roots are imaginary\n";

   }
return 0;
}