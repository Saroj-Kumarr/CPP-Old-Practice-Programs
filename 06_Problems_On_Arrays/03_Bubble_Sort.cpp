#include <bits/stdc++.h>
using namespace std;
void Bubble_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
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

    Bubble_sort(arr,size);
    
return 0;
}