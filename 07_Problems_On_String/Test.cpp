#include<iostream>
#include<vector>
using namespace std;
                    
int main()
{
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;

    for(int i=0;i<n;i++)
    cin>>arr[i];

    vector<int> v;
    
    int j=0;
    int k=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        arr[j++]=arr[i];
        else
        v.push_back(arr[i]);
    }

    int i=0;
    for(int k=j;k<n;k++)
    {
        arr[k]=v[i++];
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


return 0;
}