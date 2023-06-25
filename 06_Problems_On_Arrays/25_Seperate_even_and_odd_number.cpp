#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp=*a;
         *a=*b;
         *b=temp;
}

void Seperate_even_and_odd_number(int arr[], int n)
{
    int left_num=0;
    int right_num=n-1;

    while(left_num<right_num)
    {
    while(arr[left_num]%2==0 && left_num<right_num)
    left_num++;

    while(arr[right_num]%2==1 && left_num<right_num)
    right_num--;

    if(left_num<right_num)
    {
        swap(&arr[left_num], &arr[right_num]);
        left_num++;
        right_num--;
    }

    }

    for(int i=0;i<n;i++)
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

    Seperate_even_and_odd_number(arr, n);
  
return 0;
}