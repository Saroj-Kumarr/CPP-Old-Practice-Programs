#include <bits/stdc++.h>
using namespace std;

void Print_common_elements(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3 )
{
  int i=0, j=0,k=0;
  while(i<n1 && j<n2 && k<n3)
  {
      if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
      {
          cout<<"\n\n"<<arr1[i]<<" ";
          i++;
          j++;
          k++;
      }
      else if(arr1[i]<arr2[j])
      i++;

      else if(arr2[j]<arr3[k])
      j++;

      else
      k++;
  }

}

int main()
{
   int n1,n2,n3;

    cout<<"******Enter three sorted arrays******\n";
    cout<<"enter size of first array\n";
    cin>>n1;
    int arr1[n1];

    cout<<"enter elements of first array\n";
    for(int i=0;i<n1;i++)
    cin>>arr1[i];

    cout<<"enter size of second array\n";
    cin>>n2;
    int arr2[n2];
     
     cout<<"enter elements of second array\n";
     for(int i=0;i<n2;i++)
     cin>>arr2[i];

    cout<<"enter size of third array\n";
    cin>>n3;
    int arr3[n3];
     
     cout<<"enter elements of third array\n";
     for(int i=0;i<n3;i++)
     cin>>arr3[i];
    
     Print_common_elements(arr1,n1,arr2,n2,arr3,n3);
  
return 0;
}