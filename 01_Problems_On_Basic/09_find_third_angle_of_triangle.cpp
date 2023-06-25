#include <bits/stdc++.h>
using namespace std;
int main()
{
    int side1, side2;
    cout<<"enter 1st and 2nd angle of triagle\n";
    cin>>side1>>side2;

    int side3=180-(side1+side2);
    cout<<"third angle is "<<side3;
      
return 0;
}