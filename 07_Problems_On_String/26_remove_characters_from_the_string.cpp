#include <bits/stdc++.h>
using namespace std;

void remove_character_except_alphabet(string str)
{

    int j=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
        str[j++]=str[i];
    }

    for(int i=0;i<j;i++)
    cout<<str[i];
}

int main()
{
    string str;
    cout<<"enter a string \n";
    getline(cin, str);

    remove_character_except_alphabet(str);
  
return 0;
}