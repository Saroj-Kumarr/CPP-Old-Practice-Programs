#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num={1,2,3,4,5};
    
    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;

    num.pop_back();
    num.pop_back();

    for(const int &i : num)
    cout<<i<<" ";
    cout<<endl;
  
return 0;
}