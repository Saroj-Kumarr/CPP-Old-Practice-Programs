#include <bits/stdc++.h>
using namespace std;
void Find_all_repeating_element(int arr[],int size)
{
     int dup[size];
     int count=0;

    for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;j++)
      {
       if(arr[i]==arr[j])
       dup[count++]=arr[i];
      }
    }

     sort(dup,dup+count);
     
     cout<<"repeating elements are \n";
    for(int i=0;i<count;i++)
    {
        if(dup[i]!=dup[i+1])
        cout<<dup[i]<<" ";
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

Find_all_repeating_element(arr, size);
  
return 0;
}