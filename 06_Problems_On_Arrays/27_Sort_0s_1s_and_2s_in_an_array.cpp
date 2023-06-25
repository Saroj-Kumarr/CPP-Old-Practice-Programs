#include <bits/stdc++.h>
using namespace std;

void Seperate_0s_1s_and_2s(int arr[], int n)
{
     int count1=0;
     int count2=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==0)
      count1++;
  }

   for(int i=0;i<n;i++)
  {
      if(arr[i]==1)
      count2++;
  } 

   for(int i=0;i<count1;i++)
   arr[i]=0;

   for(int i=count1;i<(count1+count2);i++)
   arr[i]=1;

   for(int i=(count1+count2);i<n;i++)
   arr[i]=2;

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

    Seperate_0s_1s_and_2s(arr,n);

  
return 0;
}