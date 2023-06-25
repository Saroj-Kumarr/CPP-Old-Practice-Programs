#include <bits/stdc++.h>
using namespace std;

int &fun(int &a)

{

cout<<a<<endl; //——→10

return a;

}

int main()

{

int a=10;

fun(a)=25;

cout<<a;  //—→>25

}