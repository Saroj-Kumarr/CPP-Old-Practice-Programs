#include <bits/stdc++.h>
using namespace std;

void Seperate_0s_and_1s(int arr[], int n)
{
     int count=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==0)
      count++;
  }

   for(int i=0;i<count;i++)
   arr[i]=0;

   for(int i=count;i<n;i++)
   arr[i]=1;

   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";

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

    Seperate_0s_and_1s(arr, n);
  
return 0;
} 