#include <bits/stdc++.h>
using namespace std;
void Find_median(int arr[], int size)
{
    sort(arr,arr+size);

    if(size%2==0)
    {
    int ind1=(size/2)-1;
    int ind2=(size/2);
    cout<<"median of array is "<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else
    {
    cout<<"median of array is "<<arr[size/2];
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

Find_median(arr,size);

return 0;
}