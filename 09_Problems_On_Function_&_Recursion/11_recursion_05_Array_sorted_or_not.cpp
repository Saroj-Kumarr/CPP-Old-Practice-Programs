#include <bits/stdc++.h>
using namespace std;

bool IsSorted(int arr[], int n)
{
  if(n==1)
  {
      return true;
  }

  bool prevArray=IsSorted(arr+1, n-1);

  return (arr[0]<arr[1] && prevArray );

}

int main()
{
    
   int size;
   cout<<"enter size of array :";
   cin>>size;

   int arr[size];
   cout<<"enter elements of array\n";
   for(int i=0;i<size;i++)
   cin>>arr[i];

   if(IsSorted(arr,size))
   cout<<"Given array is sorted ";
   else
   cout<<"Given array is not sorted ";
    
  
return 0;
}