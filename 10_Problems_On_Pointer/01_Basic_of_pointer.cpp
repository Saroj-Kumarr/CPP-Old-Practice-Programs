#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num=10;
    int *ptr;
    ptr=&num;

    cout<<"Value of num is "<<num<<endl;
    cout<<"Value of num is "<<*ptr<<endl;

    cout<<"Address of num is "<<&num<<endl;
    cout<<"Address of num is "<<ptr<<endl;

    cout<<"Address of ptr is "<<&ptr<<endl;
    cout<<"Address of ptr is "<<ptr<<endl;
  
return 0;
}