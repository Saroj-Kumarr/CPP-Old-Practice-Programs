#include <bits/stdc++.h>
using namespace std;

void Find_the_Number_of_pairs_of_integers(int arr[], int n, int Specific_number)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]==Specific_number)
         cout<<arr[i]<<" "<<arr[j]<<endl;
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

    int Specific_number;
    cout<<"enter a specific number :";
    cin>>Specific_number;

    Find_the_Number_of_pairs_of_integers(arr, n, Specific_number);

  
return 0;
}