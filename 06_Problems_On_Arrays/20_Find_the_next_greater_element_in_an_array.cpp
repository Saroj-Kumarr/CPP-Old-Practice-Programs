#include <bits/stdc++.h>
using namespace std;

void Find_next_greater_element(int arr[], int n)
{

    for(int i=0;i<n;i++)
    {

         for(int j=i+1;j<n;j++)
         {
          if(arr[i]<arr[j])
          {
          cout<<arr[i]<<" :"<<arr[j]<<endl;
          break;
          }
         }
    }

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
    
   Find_next_greater_element(arr, n);
  
return 0;
}