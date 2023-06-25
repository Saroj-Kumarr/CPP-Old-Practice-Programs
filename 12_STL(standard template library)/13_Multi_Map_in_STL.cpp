#include<iostream>
#include<map>
using namespace std;
                    
int main()
{
    multimap<string, int> mm;
    mm.emplace("raj",1);
    mm.emplace("raj",2);
    mm.emplace("rahul",10);
    mm.emplace("rahul",5);
    mm.emplace("rahul",3);

    for(auto it=mm.begin();it!=mm.end();it++)
    cout<<it->first<<" "<<it->second<<endl;

  
return 0;
}