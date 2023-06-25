#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num={1,2,3,4,5};
    
    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;

    num.push_back(6);
    num.push_back(7);
    num.push_back(8);

    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;
  
return 0;
}