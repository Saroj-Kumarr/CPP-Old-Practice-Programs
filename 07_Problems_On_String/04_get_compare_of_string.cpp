#include <bits/stdc++.h>
using namespace std;

bool IsEqual(char str1[], char str2[])
{
   int length=strlen(str1);

   for(int i=0;i<length;i++)
   {
       if(str1[i]!=str2[i])
       return false;
   }

   return true;

}

int main()
{
 char str1[100];
 cout<<"enter first string \n";
 cin.getline(str1,100);

 
 char str2[100];
 cout<<"enter second string \n";
 cin.getline(str2,100);


if(IsEqual(str1, str2))
cout<<"string is equal\n";
else
cout<<"string is not equal\n";

int result=strcmp(str1,str2);
if(result==0)
cout<<"string is equal\n";
else
cout<<"string is not equal\n";

return 0;
}