#include <bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
        if(arr[i]>arr[j])
        swap(arr[i], arr[j]);
      }
  }

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

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

    Selection_sort(arr,size); 

return 0;
}