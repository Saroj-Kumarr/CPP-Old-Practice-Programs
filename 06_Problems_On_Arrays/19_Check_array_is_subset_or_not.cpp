#include <bits/stdc++.h>
using namespace std;
bool Is_subset(int arr1[],int n1, int arr2[], int n2)
{

    if(n1>n2)
    return false;
    
    for(int i=0;i<n1;i++)
    {   
        bool present=false;

        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
            present=true;
            break;
            }
            
        }
        if(present==false)
        return false;

    }
    return true;

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

    bool result=Is_subset(arr1,n1,arr2,n2);

    if(result==true)
    cout<<"arr1[] is subset of arr2[]";
    else
    cout<<"arr1[] is not subset of arr2[]";

return 0;
}
