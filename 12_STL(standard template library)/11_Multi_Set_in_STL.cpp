#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

//for printing multiset 
void show(multiset<int> ms)
{
    for(auto it=ms.begin();it!=ms.end();it++)
    {
    cout<<*it<<" ";
    }
    cout<<endl;
    
}

                    
int main()
{
    multiset<int> ms; //it allows to store a value many times in increasing order 
    
    int n;
    cout<<"enter size of multiset\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }

    show(ms);

    cout<<"size of multiset "<<ms.size()<<endl;
    
    //  ms.erase(5);        ----------------------->erase()

    show(ms);

    multiset<int> ms2(ms.begin(),ms.end());

    show(ms2);

    ms2.erase(ms2.begin(), ms2.find(5));   // it will be delete values up to 5

    show(ms2);

    cout<<"present "<<ms.count(5)<<" times\n";

    ms.erase(ms.find(5));   //--->it will delete 5 once

    //ms.erase(ms.find(5), ms.find(5) + 2); it will delete 2 instances of 5
    // ms.clear()
    // ms.emplace()
    // ms.empty()
  
     

return 0;
}
