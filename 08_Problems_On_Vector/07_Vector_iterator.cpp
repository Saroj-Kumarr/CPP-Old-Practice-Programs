#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num={1,2,3,4,5};
    
    vector <int>::iterator iter1;
    vector <int>::iterator iter2;
    
    iter1=num.begin();       //--------->pointing first element of the vector 
    iter2=num.end()-1;       //--------->pointing last element of the vector

    cout<<*iter1<<" ";
    cout<<*(iter1+2)<<" ";
    cout<<*iter2<<endl;

    vector <int> num3={10,20,30,40,50};
    vector <int>::iterator iter;

    for(iter=num3.begin();iter!=num3.end();iter++)
    cout<<*iter<<" ";

   vector <int>::reverse_iterator it=num.rbegin();

   while(it!=num.rend())
   {
       cout<<*it;
       it++;
   }


  
return 0;
}