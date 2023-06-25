#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
        
void display(array<int, 5> arr)
{
    for(auto it=arr.begin();it!=arr.end();it++)
    cout<<*it<<" ";

    cout<<endl;
}

int main()
{
    array<int, 5>arr={10,20,30,40,50};
    array<int, 5>arr2={5,4,1,2,3};

    cout<<arr.size()<<endl;      //------>size()
    cout<<arr.at(0)<<endl;       //------->at()
    cout<<arr.front()<<endl;     //------>front()
    cout<<arr.back()<<endl;      //------->back()
    cout<<arr.empty()<<endl;     //------->empty()
    cout<<arr.max_size()<<endl;  //-------->max_size()

    arr.fill(10);

    display(arr);

    arr.swap(arr2);              //------>swap()

    display(arr);

    int *ptr=arr.data();         //------>data() gives the address of the first element
    cout<<ptr<<" "<<&arr[0]<<endl;

    sort(arr.begin(), arr.end());    //------>sort()

    display(arr);

     int *Min=min_element(arr.begin(),arr.end());    //------->min_element()  address of min element
     int *Max=max_element(arr.begin(),arr.end());    //-------->max_element() address of max element

    cout<<"min element = "<<*Min<<endl;
    cout<<"max element = "<<*Max<<endl;

    int sum=accumulate(arr.begin(), arr.end(),0);     //------>accumulate() gives the sum of all element
    cout<<"sum of array : "<<sum<<endl;

    cout<<"count = "<<count(arr.begin(), arr.end(),1);  //---->count() gives how many time is present in array

    
return 0;
}