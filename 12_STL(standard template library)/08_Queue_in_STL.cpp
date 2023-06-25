#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

void show(queue<int> q)
{
    while(!q.empty())
    {
    cout<<q.front()<<" ";
    q.pop();
    }
    cout<<endl;
}
                    
int main()
{
    queue<int> q;
    q.push(10);   //------>push()
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    show(q);
    
    q.pop();       //------>pop()
    q.pop();

    show(q);

    cout<<q.front()<<endl; //------>front()
    cout<<q.back()<<endl;  //------>back()
    cout<<q.size()<<endl;  //------>size()

   queue<int> q2;

   q2.push(1);
   q2.push(2);
   q2.push(3);
   q2.push(4);
   q2.push(5);
   q2.emplace(6);          //emplace()
    
    show(q);
    show(q2);

    q.swap(q2);           //swap()

    show(q);
    show(q2);

    cout<<"empty = "<<q.empty()<<endl;  //empty()

  
return 0;
}