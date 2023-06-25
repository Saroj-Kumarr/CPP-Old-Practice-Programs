#include <bits/stdc++.h>
using namespace std;

void Find_the_missing_elements(int arr1[], int n1, int arr2[], int n2)
{
 
 for(int i=0;i<n1;i++)
 {
      int check=0;
   for(int j=0;j<n2;j++)
   {
       if(arr1[i]==arr2[j])
       check=1;
   }
   if(check==0)
   cout<<arr1[i]<<" ";

 }

}

int main()
{

 int n1,n2;
    cout<<"enter size of first array\n";
    cin>>n1;
    int arr1[n1];

    cout<<"enter elements of first array\n";
    for(int i=0;i<n1;i++)
    {
    cin>>arr1[i];
    }

    cout<<"enter size of second array\n";
    cin>>n2;
    int arr2[n2];
     
     cout<<"enter elements of second array\n";
     for(int i=0;i<n2;i++)
    {
    cin>>arr2[i];
    }

    Find_the_missing_elements(arr1, n1, arr2, n2);

return 0;
}