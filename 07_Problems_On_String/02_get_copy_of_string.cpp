#include <bits/stdc++.h>
using namespace std;
void Copy_string(char str1[], char str2[])
{
int length=strlen(str1);
int i;

for( i=0;i<length;i++)
{
    str2[i]=str1[i];
}
str2[i]='\0';

cout<<str2<<endl;

}

int main()
{
 char str1[100];
 cout<<"enter a string \n";
 cin.getline(str1,100);

 char str2[100];

 Copy_string(str1, str2);
 
 char str3[100];
 strcpy(str3,str1);
 cout<<str3;
  
return 0;
}