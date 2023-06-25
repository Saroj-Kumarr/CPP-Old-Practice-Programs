#include <bits/stdc++.h>
using namespace std;

int Binary_search(int arr[], int n, int key)
{
    int low=0;
    int high=n-1;
    int mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
        return mid;

        else if(key<arr[mid])
        high=mid-1;

        else
        low=mid+1;
    }

    return -1;

}

int main()
{
  int size;
   cout<<"enter size of array :";
   cin>>size;

    int arr[size];
    cout<<"enter elements in sorted order\n";
    for(int i=0;i<size;i++)
    cin>>arr[i];

    int key;
    cout<<"Enter key element\n";
    cin>>key;

    int index=Binary_search(arr, size, key);

    if(index>=0)
    cout<<key<<" is found at "<<index<<" index";
    else 
    cout<<key<<" is not found ";

return 0;
}