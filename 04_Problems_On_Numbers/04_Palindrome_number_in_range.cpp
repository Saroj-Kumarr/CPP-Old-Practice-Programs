#include<iostream>
using namespace std;
bool ispalindrome(int n)
{
    int x=n;
    int temp=0;

    while(x!=0)
    {
        temp=temp*10+x%10;
        x=x/10;
    }
    if(temp==n)
    return true;
    else
    return false;

}

int main()
{
    int min, max;
    cout<<"enter minimum number\n";
    cin>>min;
    cout<<"enter maximum number\n";
    cin>>max;

    for(int i=min;i<=max;i++)
    {
        if(ispalindrome(i))
        cout<<i<<endl;


    }
    
return 0;
}