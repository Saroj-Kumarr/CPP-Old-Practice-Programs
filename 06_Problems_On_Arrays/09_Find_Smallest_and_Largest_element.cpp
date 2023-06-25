#include <iostream>
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

int Find_smallest(int arr[], int size)
{
    int smallest=arr[0];
    for(int i=1; i<size; i++)
    {
        if(smallest>arr[i])
        smallest=arr[i];
    }
    return smallest;
}

int main()
{
   int size,Sum;
   cout<<"enter size of array :";
   cin>>size;

    int arr[size];
    cout<<"enter elements of array\n";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"largest number is :"<<Find_largest(arr, size)<<endl;
    cout<<"smallest number is :"<<Find_smallest(arr,size);

    return 0;
}
