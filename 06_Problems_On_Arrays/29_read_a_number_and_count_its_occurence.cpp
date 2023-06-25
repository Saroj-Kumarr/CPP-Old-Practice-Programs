#include <bits/stdc++.h>
using namespace std;

int Count_occurence_of_a_given_number(int arr[], int n, int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        count++;
    }

    return count;

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
    
    int key;
    cout<<"Enter key element :";
    cin>>key;
  
   cout<<key<<" found "<<Count_occurence_of_a_given_number(arr, n, key)<<" times in given array";

return 0;
}