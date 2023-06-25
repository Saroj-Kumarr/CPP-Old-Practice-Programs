#include <bits/stdc++.h>
using namespace std;

string Remove_duplicate(string str)
{
    if(str.length()==0)
    {
        return "";
    }

    char ch=str[0];

    string ans=Remove_duplicate(str.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }

    return (ch+ans);
}

int main()
{
    string str;
    cout<<"enter a string \n";
    cin>>str;

    cout<<Remove_duplicate(str);
  
return 0;
}