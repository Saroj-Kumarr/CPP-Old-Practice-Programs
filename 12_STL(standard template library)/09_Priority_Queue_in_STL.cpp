#include<iostream>
#include<queue>
using namespace std;

void show(priority_queue<int> p)
{
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }

    cout<<endl;

}

void show2(priority_queue<int, vector<int>, greater<int> > p)
{
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }

    cout<<endl;

}

int main()
{
 priority_queue<int> p;               //By default c++ creates max heap for priority queue
   p.push(10);           //push()
   p.push(40);
   p.push(30);
   p.push(50);
   p.push(40);

   priority_queue<int, vector<int>, greater<int> > p_test;   //creating min heap for priority queue
   p_test.push(7);
   p_test.push(5);
   p_test.push(1);
   p_test.push(3);
   p_test.push(10);

   show2(p_test);



   show(p);
   
   cout<<p.top()<<endl; //------>top()
   cout<<p.size()<<endl;  //------>size()

   priority_queue<int> p2;
   p2.push(1);
   p2.push(4);
   p2.push(3);
   p2.push(5);
   p2.push(4);

   show(p);
   show(p2);

   p.swap(p2);        //----->swap()

   show(p);
   show(p2);

   /* remaining function will be same as queue like empty, empalce, top, pop, etc*/

   
return 0;
}