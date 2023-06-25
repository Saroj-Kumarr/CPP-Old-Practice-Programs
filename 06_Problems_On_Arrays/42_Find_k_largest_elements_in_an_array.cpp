#include <bits/stdc++.h>
using namespace std;

void Find_k_largest_elements(int arr[], int arr_size, int k)
{
    if(k>arr_size)
    {
        cout<<"k is greater than array_size\n";
        exit(0);
    }

    sort(arr, arr+arr_size, greater<int>());  //sort in decreasing order

    for(int i=0;i<k;i++)
    {
    if(arr[i]!=arr[i+1])
    cout<<arr[i]<<" ";
    else
    k++;
    }


}

int main()
{
    int arr_size, k;
    cout<<"enter size of array :";
    cin>>arr_size;

    cout<<"enter value of k";
    cin>>k;
    
    int arr[arr_size];
    cout<<"enter elements of array\n";
    for(int i=0;i<arr_size;i++)
    cin>>arr[i];

    Find_k_largest_elements(arr, arr_size, k);
  
return 0;
}