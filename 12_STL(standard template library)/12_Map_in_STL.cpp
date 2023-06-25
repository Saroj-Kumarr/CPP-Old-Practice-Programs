#include<iostream>
#include<map>
using namespace std;

void show(map<int, int> m)
{
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
}


void show(map<string, int> m)
{
    map<string,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
}
                    
int main()
{
    map<int, int> m;
    int n;
    cout<<"enter size of map\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;

        m.emplace(x,y);  // for using insert(pair<int,int> (x,y))
    }

   show(m);

   map<int,int> m2(m.begin(),m.end());
   
   cout<<"map2"<<endl;
   show(m2);

   map<string, int> mpp;

     mpp.emplace("saroj",10);
     mpp.emplace("manoj",20);
     mpp.emplace("satish",30);
     mpp.emplace("manoj",40);

     //mpp.erase("manoj");
     //mpp.erase(mpp.begin());
     //mpp.erase(mpp.beginI(),mpp.end());

     cout<<mpp.count("saroj")<<endl; //return 1 if present otherwise 0

     show(mpp);

     auto it=mpp.find("manoj");  //it points address of manoj



return 0;
}