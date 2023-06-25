#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[], int n)
{
    int key, j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

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

    Insertion_sort(arr,size); 
  
return 0;
}