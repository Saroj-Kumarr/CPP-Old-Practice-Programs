#include <bits/stdc++.h>
using namespace std;

int* create_array(int n)
{
    int *ptr=new int[n];

    for(int i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }

    return ptr;
}

int main()
{

int n=5;

int *ptr=create_array(5);

cout<<"printing array\n";

for(int i=0;i<n;i++)
cout<<ptr[i]<<endl;
  
return 0;
}