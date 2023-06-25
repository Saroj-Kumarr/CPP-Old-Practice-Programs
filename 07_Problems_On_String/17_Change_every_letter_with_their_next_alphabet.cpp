#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin, str);

    for(int i=0;i<str.size();i++)
    {
        str[i]=str[i]+1;

    }

    for(int i=0;i<str.size();i++)
    {
    cout<<str[i];
    }
    

return 0;
}