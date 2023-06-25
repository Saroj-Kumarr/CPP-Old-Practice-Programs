#include <bits/stdc++.h>
using namespace std;

int Linear_search(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;

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

    int key;
    cout<<"Enter key element\n";
    cin>>key;

    int index=Linear_search(arr, size, key);

    if(index>=0)
    cout<<key<<" is found at "<<index<<" index";
    else 
    cout<<key<<" is not found ";

return 0;
}