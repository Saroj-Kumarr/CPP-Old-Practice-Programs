#include <bits/stdc++.h>
using namespace std;

void Insert_an_array_in_another_array(int arr[], int n, int Insert_array[], int s, int index)
{

for(int i=n-1;i>=index;i--)
{
  arr[s+i]=arr[i];
} 

for(int i=0;i<s;i++)
{
    arr[index+i]=Insert_array[i];
}

for(int i=0;i<(n+s);i++)
{
    cout<<arr[i]<<" ";
}

}


int main()
{
     int s;
    cout<<"enter size of inserting array\n";
    cin>>s;

    int Insert_array[s];
    cout<<"enter elementst of inserting array\n";
    for(int i=0;i<s;i++)
    cin>>Insert_array[i];

     int n;
    cout<<"enter size of main array\n";
    cin>>n;

    int arr[n+s];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    int index;
    cout<<"enter index number of array\n";
    cin>>index;
    
    Insert_an_array_in_another_array(arr, n, Insert_array, s, index);
  
return 0;
}