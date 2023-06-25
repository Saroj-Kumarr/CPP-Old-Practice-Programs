#include <bits/stdc++.h>
using namespace std;

template<class T>   //we can use typename instead of class
T Find_max(T a, T b)
{
    return max(a,b);
}

template<typename T1, typename T2>
void func(T1 a, T2 b)
{
    cout<<a<<" "<<b<<endl;
}

template<class T>
void Swap(T &a, T &b)
{
    T temp=a;
       a=b;
       b=temp;
    
}

class test
{
    public:
      string name;
      int age;

      test(string n, int a)
      {
          name=n;
          age=a;
      }

      void operator<(test &t)
      {
          if(this->age>t.age)
          cout<<this->name<<" is elder"<<endl;
          else
          cout<<t.name<<" is elder"<<endl;
      }

};


int main()
{
    cout<<Find_max<int>(10,20)<<endl;
    cout<<Find_max(20,30)<<endl;
    cout<<Find_max<char>('A', 'B')<<endl;
    cout<<Find_max('A', 'B')<<endl;
    cout<<Find_max<double>(10.20, 20.50)<<endl;

    func<int, double>(10,20.50);

    int a=10, b=20;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    test t1("saroj",30);
    test t2("manoj",20);

     t1<t2;


return 0;
}
