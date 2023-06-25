#include <bits/stdc++.h>
using namespace std;

void remove_duplicate_elements(int arr[], int size)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[i+1])
        arr[j++]=arr[i];
    }

    cout<<"after removing duplicate elements \n";
    for(int i=0;i<j;i++)
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

remove_duplicate_elements(arr, size);
  
return 0;
}