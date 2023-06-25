#include <bits/stdc++.h>
using namespace std;

void Find_smallest_missing_element(int arr[], int n)
{
   for(int i=0;i<n;i++)
   {
       if((arr[i]+1)!=arr[i+1])
       {
       cout<<"Smallest missing element is :"<<(arr[i]+1);
       exit(0);
       }

   }
   cout<<"There is no any missing element";

   
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

    Find_smallest_missing_element(arr,n);
  
return 0;
}