#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int array_size)
{
 int first_index=0;
 int last_index=array_size-1;
 int temp, n=(array_size/2);

 for(int i=0;i<n;i++)
 {
 temp=arr[i];
 arr[i]=arr[last_index-i];
 arr[last_index-i]=temp;
 }
cout<<"after rotation array is \n";

for(int i=0;i<array_size;i++)
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

reverse_array(arr, size);
return 0;
}