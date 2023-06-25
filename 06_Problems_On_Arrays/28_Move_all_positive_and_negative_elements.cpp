#include <bits/stdc++.h>
using namespace std;

void Move_all_positive_and_negative_element(int arr[], int n)
{
int count=0;
int temp[n];

for(int i=0;i<n;i++)
{
if(arr[i]>=0)
temp[count++]=arr[i];
}

for(int i=0;i<n;i++)
{
if(arr[i]<0)
temp[count++]=arr[i];
}

for(int i=0;i<n;i++)
arr[i]=temp[i];

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

    Move_all_positive_and_negative_element(arr, n);
  
return 0;
}