#include <bits/stdc++.h>
using namespace std;

void Find_three_largest_numbers(int arr[], int size)
{
    
    int i, first, second, third;
    first=second=third=INT_MIN;

    if(size<3)
    cout<<"invalid size\n";

    for(i=0;i<size;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else
        {
            third=arr[i];
        }
    }
    cout<<"first largest is :"<<first<<endl;
    cout<<"second largest is :"<<second<<endl;
    cout<<"third largest is "<<third;
}


int main()
{
    int size;
    cout<<"enter size of array :";
    cin>>size;
    int arr[size];
    cout<<"enter elements of array\n";
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    }   

   Find_three_largest_numbers(arr, size);

  
return 0;
}