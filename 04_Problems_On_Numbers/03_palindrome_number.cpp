#include<iostream>
using namespace std;

bool IsPalindrome(int n)
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
    int n;
    cout<<"enter a number\n";
    cin>>n;

    if(IsPalindrome(n))
    cout<<n<<" is a palindrome number\n";
    else
    cout<<n<<" is not a palindrome number\n";
    
return 0;
}