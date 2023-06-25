#include <bits/stdc++.h>
using namespace std;
 void remove_duplicate_elements(int arr[], int size)
 {
 int count=0;
  for(int i=0;i<size;i++)
  {
     int temp=0;
      for(int j=i+1;j<size;j++)
      {
        if(arr[i]==arr[j])
        temp=1;
      }
      if(temp==0)
      arr[count++]=arr[i];
  }

cout<<"after removing duplicate elements\n";
for(int i=0;i<count;i++)
{
 cout<<arr[i]<<" ";
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

remove_duplicate_elements(arr, size);
  
  
return 0;
}