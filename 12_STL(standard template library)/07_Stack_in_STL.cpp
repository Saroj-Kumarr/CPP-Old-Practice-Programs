#include<iostream>
#include<stack>
using namespace std;

void show(stack<int> s)
{
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;

}

int main()
{
stack<int> s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

s.pop();

cout<<s.size()<<endl;

cout<<"top : "<<s.top()<<endl;

show(s);

stack<int> s2;

s2.push(20);
s2.push(30);
s2.push(40);
s2.push(50);

show(s);
show(s2);

s.swap(s2);
cout<<"after swap"<<endl;
show(s);
show(s2);

s.emplace(10);

show(s);

  
return 0;
}