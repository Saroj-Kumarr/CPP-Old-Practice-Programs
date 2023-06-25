#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter size of array\n";
  cin>>n;

  int num[n];
  cout<<"Enter array elements\n";
  for(int i=0;i<n;i++) 
  cin>>num[i];

  int *ptr;
  ptr=num;

  for(int i=0;i<n;i++)
  cout<<ptr[i]<<" ";
  cout<<endl;

  for(int i=0;i<n;i++)
  cout<<*(ptr+i)<<" ";
  cout<<endl;
  

return 0;
}