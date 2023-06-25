#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, first, last;
    int swap, digit, divide, middigit;
    cout<<"enter a number\n";
    cin>>num;

    digit=log10(num);
    divide=pow(10, digit);

    first=num/divide;
    num=num%divide;
    last=num%10; 
    num=num/10;

    swap=last*divide+num*10+first;
    cout<<"swap value is "<<swap;
     
return 0;
}