#include<iostream>
#include<tuple>
using namespace std;
                    
int main()
{
    pair<int, char> p1;
    pair<int, char> p2={5,'b'};
    pair<int, char> p3=make_pair(2,'c'); //--->make_pair()

    p1.first=100;
    p1.second='a';

    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    pair<string, double> p4={"saroj",10.50};

    cout<<p4.first<<endl;
    cout<<p4.second<<endl;

    p1.swap(p2);     //-------->swap()

    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<int, int> p={1,2};
    int a, b;
    tie(a,b)=p;

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;

    pair<int, int> P={3,4};
    tie(a,ignore)=P;

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;

    pair<int ,pair<int, char>> P2={1,{2,'a'}};
    int x, y;
    char z;

    x=P2.first;
    tie(y,z)=P2.second;

    cout<<"x "<<x<<endl<<"y "<<y<<endl<<"z "<<z<<endl;

    pair<string, int>g1={"hello",1};
    pair<string, int>g2(g1);

    cout<<g2.first<<" "<<g2.second<<endl;

    g1.first="change";
    g1.second=10;

    cout<<g1.first<<" "<<g1.second<<endl;

   pair<int,int> pr={1,2};
   cout<<pr.first<<" "<<pr.second<<endl;

   pair<pair<int,int>, pair<int,int>> pr1={{1,2},{3,4}};

   cout<<pr1.first.first<<" "<<pr1.first.second<<" "<<pr1.second.first<<" "<<pr1.second.second<<endl;
  
return 0;
}