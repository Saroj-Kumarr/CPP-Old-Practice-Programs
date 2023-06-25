#include <bits/stdc++.h>
using namespace std;

void Find_the_first_repeating_element(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
      int count=0;
      for(int j=i+1;j<n;j++)
      {
          if(arr[i]==arr[j])
          {
           count++;
           break;
          }
         
      }
      if(count==1)
      {
         cout<<"First repeating element is :";
          cout<<arr[i];
          exit(0);
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

    Find_the_first_repeating_element(arr, n);
  
return 0;
}