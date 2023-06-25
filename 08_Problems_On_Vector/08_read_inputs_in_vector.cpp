#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"enter size of vector\n";
    cin>>n;

    vector <int> num(n);

   cout<<"Enter vector elements\n";
   for(int i=0;i<n;i++)
   {
       int temp;
       cin>>temp;
       num.push_back(temp);
   }


   cout<<"Printing vector elements\n";
   for(auto i=num.begin();i!=num.end();i++)
   cout<<*i<<endl;

   cout<<"Printin vector elements in reverse order\n";
   for(auto i=num.rbegin();i!=num.rend();i++)
   cout<<*i<<endl;


  
return 0;
}