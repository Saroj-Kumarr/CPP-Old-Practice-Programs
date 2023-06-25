#include <bits/stdc++.h>
using namespace std;

string Move_all_x_last(string str)
{
    if(str.length()==0)
    {
        return "";
    }

    char ch=str[0];
    
    string ans=Move_all_x_last(str.substr(1));

    if(ch=='x')
    {
        return (ans+ch);
    }

    return (ch+ans);


}

int main()
{
    string str;
    cout<<"enter a string\n";
    cin>>str;

    cout<<Move_all_x_last(str);
  
return 0;
}