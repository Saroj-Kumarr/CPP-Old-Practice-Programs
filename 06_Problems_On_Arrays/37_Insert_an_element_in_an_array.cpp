#include <bits/stdc++.h>
using namespace std;

void Insert_an_element(int arr[], int n, int index, int key)
{

for(int i=n;i>index;i--)
{
    arr[i]=arr[i-1];
}
arr[index]=key;

cout<<"New array :";
for(int i=0;i<n+1;i++)
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

    int index;
    cout<<"enter index number\n";
    cin>>index;

    int key;
    cout<<"enter key element\n";
    cin>>key;

    Insert_an_element(arr, n, index, key);

  
return 0;
}