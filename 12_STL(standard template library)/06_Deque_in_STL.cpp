#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void show(deque<int> d)
{
    deque<int>:: iterator it;
    for(it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
                    
int main()
{
deque<int> d;

d.push_back(50);    //push_back()
d.push_back(40);
d.push_back(30);
d.push_front(20);   //push_front()
d.push_front(10);

show(d);

d.pop_back();        //pop_back()
d.pop_front();       //pop_front()

show(d);

deque<int>:: iterator it=d.begin();

d.insert(it,5);  //------>insert()

show(d);

d.insert(it,3,0);

show(d);

auto i=d.cbegin();   //constant iterator

for(i=d.cbegin();i!=d.cend();i++) //we can not modify the value using cbegin
cout<<*i<<" ";
cout<<endl;

show(d);

deque<int> d2;
d2.assign(5,10);       //assign()

show(d2);

cout<<d.front()<<endl;    //front()
cout<<d.back()<<endl;     //back()

d.resize(5);              //resize()

show(d);                 

sort(d.begin(), d.end());  //sort()

show(d);

reverse(d.begin(), d.end());  //reverse

show(d);

show(d2);

d2.clear();        //---->clear()

show(d2);

 deque<int>:: iterator iter=d.begin();

 d.erase(iter);             //erase()

 show(d);

 cout<<"size : "<<d.size()<<endl;

 cout<<d.at(1)<<endl;       //----->at()

 deque<int> d3={1,2,3,4,5};
 deque<int> d4={0,5,3,4,1,4,5};

 show(d3);
 show(d4);

 d3.swap(d4);     //------>size()
 
 show(d3);
 show(d4);



  
return 0;
}