
#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
 int sum=0;
 for(int i=0;i<size;i++)
 {
     sum=sum+arr[i];
 }
 return sum;
    
}

float Average(int sum, int total_elements)
{
    float average=(float)sum/total_elements;
    return average;
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
    Sum=sum(arr, size);
    cout<<"Sum of elements is "<<Sum<<endl;
    cout<<"Average is "<<Average(Sum, size);
    
      return 0;
}

