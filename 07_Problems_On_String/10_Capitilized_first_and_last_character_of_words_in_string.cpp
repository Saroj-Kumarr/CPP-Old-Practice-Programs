#include <bits/stdc++.h>
using namespace std;
void Capitilize_first_and_last_character(string str)
{
for(int i=0;i<str.size();i++)
{
    if(i==0 || i==str.size()-1 && str[i]>='a')
    str[i]=(char)((int)str[i]-32);
    
    else if (str[i]==' ')
    {
        if(((int)str[i-1]-32)>=65)
        str[i-1]=(char)((int)str[i-1]-32);

        if(((int)str[i+1]-32)>=65)
        str[i+1]=(char)((int)str[i+1]-32);

    }
}

cout<<str;

}


int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin, str);

    Capitilize_first_and_last_character(str);
  
return 0;
}