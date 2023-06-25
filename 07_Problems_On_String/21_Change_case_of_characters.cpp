#include <bits/stdc++.h>
using namespace std;

void Change_case_of_characters(string str)
{
 for(int i=0;i<str.size();i++)
 {
     if(str[i]>='a' && str[i]<='z')
     str[i]=str[i]-32;

     else if(str[i]>='A' && str[i]<='Z')
     str[i]=str[i]+32;

     else
     {

     }
 }

 cout<<str;

}

int main()
{
    string str;
    cout<<"enter a string \n";
    getline(cin, str);

    Change_case_of_characters(str);

return 0;
}