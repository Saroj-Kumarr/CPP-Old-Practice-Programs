#include <bits/stdc++.h>
using namespace std;

void Find_most_occuring_element(int arr[], int array_size)
{
 int max_count=0;

 for(int i=0;i<array_size;i++)
 {
     int count=1;
     for(int j=i+1;j<array_size;j++)
     {
         if(arr[i]==arr[j])
         count++;
     }

     if(max_count<count)
     {
         max_count=count;
     } 
 }
 
 for(int i=0;i<array_size;i++)
 {
     int count=1;
     for(int j=i+1;j<array_size;j++)
     {
         if(arr[i]==arr[j])
         count++;
     }

     if(count==max_count)
     {
     cout<<"most occured number\n";
     cout<<arr[i]<<endl;
     }
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

Find_most_occuring_element(arr, size);

  
return 0;
}