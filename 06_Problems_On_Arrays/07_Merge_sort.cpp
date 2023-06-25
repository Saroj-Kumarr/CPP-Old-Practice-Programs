#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
     int i=low;
     int j=mid+1;
     int k=low;
     int b[high+1];

     while(i<=mid && j<=high)
     {
      if(arr[i]<=arr[j])
      {
          b[k]=arr[i];
          i++;
      }
      else
      {
          b[k]=arr[j];
          j++;
      }
      k++;

     }

     if(i>mid)
     {
         while(j<=high)
         {
             b[k]=arr[j];
             j++;
             k++;
         }

     }
     else
     {
         while(i<=mid)
         {
             b[k]=arr[i];
             i++;
             k++;
         }
     }
    
     for(int i=low;i<=high;i++)
     arr[i]=b[i];

}

void Merge_sort(int arr[], int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        Merge_sort(arr, low, mid);
        Merge_sort(arr, mid+1, high);
        Merge(arr, low, mid, high);
    }
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

    int low=0;
    int high=size-1;
    
    Merge_sort(arr, low, high);

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

return 0;
}