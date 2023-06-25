#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num={1,2,3,4,5};
    
    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;

    num.at(2)=30;
    num.at(3)=40;

    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;
    
  
return 0;
}