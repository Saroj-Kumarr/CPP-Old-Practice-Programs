#include <bits/stdc++.h>
using namespace std;

template <class T>

class Stack
{
    private:
       T *stk;
       int top;
       int size;

   public:
        Stack(int s)
        {
         size=s;
         top=-1;
         stk=new T [size];
        }

        void push(T x);
        T pop();
        void display();
       
};

template <class T>
void Stack<T>::push(T x)
{
    if(top==size-1)
    {
    cout<<"stack overflow\n";
    }
    else
    {
     top++;
     stk[top]=x;
    }

}

template<class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
    {
        cout<<"stack underflow\n";
    }
    else
    {
     x=stk[top];
     top--;
    }
    
    return x;
}

template<class T>
void Stack<T>::display()
{
    if(top==-1)
    {
        cout<<"stack underflow\n";
    }
    else
    {
     for(int i=0;i<=top;i++)
     {
         cout<<stk[i]<<" ";
     }
    }
}

int main()
{
    Stack<int> s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    s.pop();

    s.display();


  
return 0;
}