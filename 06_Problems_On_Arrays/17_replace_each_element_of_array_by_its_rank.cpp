#include <bits/stdc++.h>
using namespace std;
void replace_each_element(int arr[],int size)
{
 int temp[size];
 
 for(int i=0;i<size;i++)
 {
 temp[i]=arr[i];
 }

 sort(temp, temp+size);

 for(int i=0;i<size;i++)
 {

     for(int j=0;j<size;j++)
     {
         if(arr[i]==temp[j] )
         arr[i]=j;
     }
 }
 for(int i=0;i<size;i++)
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

replace_each_element(arr, size);
  
return 0;
}