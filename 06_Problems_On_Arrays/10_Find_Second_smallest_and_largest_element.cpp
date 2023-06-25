#include<iostream>
using namespace std;
void Find_second_largest_and_smallest(int arr[], int size)
{
    int second_smallest, second_largest;
    int first_smallest, first_largest;
   
   first_largest=second_largest=INT_MIN;
   first_smallest=second_smallest=INT_MAX;
   
   for(int i=0;i<size;i++)
   {
       if(arr[i]>first_largest)
       {
          second_largest=first_largest;
          first_largest=arr[i] ;
       }
      
       if(arr[i]<first_smallest)
       {
          second_smallest=first_smallest;
          first_smallest=arr[i] ;
       }
     
   }
    cout<<"second smallest number is "<<second_smallest<<endl;
    cout<<"second largest number is "<<second_largest;
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

Find_second_largest_and_smallest(arr, size);

    return 0;
}

