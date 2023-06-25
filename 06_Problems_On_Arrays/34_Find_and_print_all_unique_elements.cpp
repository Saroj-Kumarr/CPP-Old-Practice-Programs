#include <bits/stdc++.h>
using namespace std;
void Find_the_all_unique_elements(int arr[], int n)
{
 for(int i=0;i<n;i++)
 {
      int check=0;

     for(int j=0;j<n;j++)
     {
      if(arr[i]==arr[j])
      check++;
     }
     if(check==1)
     cout<<"\n"<<arr[i];
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

  Find_the_all_unique_elements(arr,n);

return 0;
}