#include <bits/stdc++.h>
using namespace std;
int main()
{
    double volume, radius;
    int height;

    cout<<"enter radius and height of cylinder\n";
    cin>>radius>>height;

    volume=3.14*pow(radius, 2)*height;

    cout<<"volume of cylinder is "<<volume;
  
return 0;
}