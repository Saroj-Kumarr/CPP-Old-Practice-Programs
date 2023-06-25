#include<iostream>
using namespace std;
bool isPrime(int n)
{

  for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }

    return true;

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
        if(isPrime(i))
        cout<<i<<endl;

    }

return 0;
}