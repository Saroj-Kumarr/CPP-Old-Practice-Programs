#include <bits/stdc++.h>
using namespace std;

void get_reverse(char str[])
{
int length=strlen(str);

for(int i=0;i<length/2;i++)
{
    char temp=str[i];
    str[i]=str[length-1-i];
    str[length-1-i]=temp;
}

cout<<str<<endl;

}

int main()
{ 
 char str[100];
 cout<<"enter a string \n";
 cin.getline(str,100);

get_reverse(str);

strrev(str);
cout<<str;
  
return 0;
}