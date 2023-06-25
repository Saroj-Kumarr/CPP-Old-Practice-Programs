#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
                    
int main()
{
    int arr[]={10,20,30,40,50};

    int *ptr=(arr+4);

    cout<<*ptr;



return 0;
}