#include <bits/stdc++.h>
using namespace std;

int Find_equilibrium_index(int arr[], int n)
{
 int leftsum=0;
 int rightsum=0;

 for(int i=0;i<n;i++)
 {
    leftsum=0;

  for(int j=0;j<i;j++)
  {
      leftsum=leftsum+arr[j];
  }

  rightsum=0;

  for(int k=i+1;k<n;k++)
  {
  rightsum=rightsum+arr[k];
  }
  if(leftsum==rightsum)
  return i;

 }
 
 return -1;

}


int main()
    {
    int n;
    cout<<"enter size of array\n";
    cin>>n;

    int arr[n];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    int i=Find_equilibrium_index(arr,n);
    if(i!=-1)
    cout<<"Equilibrium index is "<<i;
    else
    cout<<"No equilibrium index";

  
return 0;
}