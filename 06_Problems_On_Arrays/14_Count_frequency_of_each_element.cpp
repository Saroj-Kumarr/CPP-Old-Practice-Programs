#include <bits/stdc++.h>
using namespace std;

void Count_frequency(int arr[], int array_size)
{
    vector<bool> visited(array_size, false);

    for(int i=0;i<array_size;i++)
    { 
        if(visited[i]==true)
        continue;

        int count=1;
        for(int j=i+1;j<array_size;j++)
        {
            if(arr[i]==arr[j])
            {
            visited[j]=true;
            count++;
            }

        }
        cout<<"Frequency of "<<arr[i]<<" is "<<count<<endl;
    }
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

Count_frequency(arr, size);

return 0;
}