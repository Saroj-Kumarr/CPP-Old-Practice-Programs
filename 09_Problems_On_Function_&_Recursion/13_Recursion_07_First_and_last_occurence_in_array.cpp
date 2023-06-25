#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(int arr[], int n, int i, int key)
{
    if(i==n)
    {
      return -1;
    }

    if(key==arr[i])
    return i;

    return FirstOccurence(arr,n,i+1,key);
   
}

int LastOccurence(int arr[], int n, int i, int key)
{

if(i==n)
{
    return -1;
}
 
int restArray=LastOccurence(arr, n, i+1, key);

if(restArray!=-1)
{
    return restArray;
}

if(key==arr[i])
{
return i;
}

return -1;

}



int main()
{
    int n, i=0;
    cout<<"enter size of array : ";
    cin>>n;

    int arr[n];
    
    cout<<"enter array elements \n";

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key;
    cout<<"enter key element \n";
    cin>>key;

    cout<<"first occurence index : "<<FirstOccurence(arr,n,i,key)<<endl;

    cout<<"Last occurence index : "<<LastOccurence(arr,n,i,key);

  
return 0;
}