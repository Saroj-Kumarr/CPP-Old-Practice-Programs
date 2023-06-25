#include <bits/stdc++.h>
using namespace std;

void Print_substrings(string str, string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=str[0];

    string ros=(str.substr(1));

    Print_substrings(ros, ans);
    Print_substrings(ros, ch+ans);
    
}

int main()
{
    string str;
    cout<<"enter a string \n";
    cin>>str;

    Print_substrings(str,"");
  
return 0;
}