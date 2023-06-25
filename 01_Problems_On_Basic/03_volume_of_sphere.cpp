#include <bits/stdc++.h>
using namespace std;
int main()
{
    double volume;
    double radius;
 
    cout<<"Enter radius of sphere\n";
    cin>>radius;

    volume=(4*3.14*pow(radius, 3))/3;

    cout<<"volume of sphere is "<<volume;
    
return 0;
}