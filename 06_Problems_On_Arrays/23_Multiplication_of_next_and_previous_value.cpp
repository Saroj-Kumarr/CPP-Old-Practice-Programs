#include <bits/stdc++.h>
using namespace std;


void Multiplication_of_next_and_previous_value(int arr[], int n)
{
    if(n<=1)
    return;

    int previous_element=arr[0];
    arr[0]=arr[0]*arr[1];

 for(int i=1;i<n-1;i++)
 {
   int current_element=arr[i];
   arr[i]=previous_element*arr[i+1];
   previous_element=current_element;

 }

 arr[n-1]=previous_element*arr[n-1];

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

    Multiplication_of_next_and_previous_value(arr, n);
  
return 0;
}