#include <bits/stdc++.h>
using namespace std;

int getlength(char str[])
{
    int len=0;

    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }

    return len;

}

int main()
{
 char str[100];
 cout<<"enter a string \n";
 cin.getline(str,100);

cout<<"length is "<<getlength(str)<<endl;

cout<<"length is "<<strlen(str);
  
return 0;
}