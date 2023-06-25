#include <bits/stdc++.h>
using namespace std;

void Print_elements_which_occur_at_least_two_times(int arr[], int n)
{
    int temp[n];
    int t=0;

for(int i=0;i<n;i++)
{
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j])
        count++;
    }

     if(count>=2)
     {
    if(t==0)
    {
        if(count>=2)
        temp[t++]=arr[i];
    }
    else
    {
        int c=0;
    for(int k=0;k<t;k++)
    {
      if(arr[i]==temp[k])
       break;
       else
       c++;
    }
    if(c==t)
    temp[t++]=arr[i];
    }
     }

} 

cout<<"elements which occur at least 2 times :\n";
for(int i=0;i<t;i++)
cout<<temp[i]<<" ";

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

    Print_elements_which_occur_at_least_two_times(arr, n);

return 0;
}