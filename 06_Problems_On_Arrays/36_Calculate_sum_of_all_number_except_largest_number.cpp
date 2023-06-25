#include <bits/stdc++.h>
using namespace std;

int Find_largest(int arr[], int size)
{
    int largest=arr[0];
    for(int i=1; i<size; i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    return largest;
}

bool Sum_of_all_numbers_except_large_num(int arr[], int n)
{
    int Large_num=Find_largest(arr, n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=Large_num)
        sum=sum+arr[i];
    }
    if(sum==Large_num)
    return true;
    else
    return false;

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
  
    cout<<"\n"<<Sum_of_all_numbers_except_large_num(arr, n);

return 0;
}