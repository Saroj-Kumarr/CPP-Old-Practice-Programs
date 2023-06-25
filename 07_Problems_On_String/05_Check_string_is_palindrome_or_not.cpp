#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(string str)
{
    int length=str.length();

for(int i=0;i<length/2;i++)
{
    if(str[i]!=str[length-1-i])
    return false;
}
return true;

}


int main()
{

string str;
cout<<"Enter a string\n";
getline(cin, str);

if(IsPalindrome(str))
cout<<"Given string is palindrome\n";
else
cout<<"Given string is not palindrome\n";
  
return 0;
}