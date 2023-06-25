#include <bits/stdc++.h>
using namespace std;
int main()
{
    int side1, side2, angle;
    cout<<"enter 1st  2nd sides and angle\n";
    cin>>side1>>side2>>angle;

    double area=side1*side2*(sin((3.14159/180)*angle)/2);
    cout<<"area of scalene triagle is "<<area;


return 0;
}