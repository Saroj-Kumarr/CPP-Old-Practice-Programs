#include <bits/stdc++.h>
using namespace std;

char Find_most_occuring_character(string str)
{

int max_count=0;
char ch;

for(int i=0;i<str.size();i++)
{
   int count=1; 

  for(int j=i+1;j<str.size();j++)
  {

   if(str[i]==str[j])
   count++;

  }
   if(max_count<count)
   {
     max_count=count;
     ch=str[i];
   }
 

}
  return ch;

}

int main()
{
    string str;
    cout<<"enter a string\n";
    getline(cin, str);

    cout<<"Most occuring character is : "<<Find_most_occuring_character(str);
  
return 0;
}