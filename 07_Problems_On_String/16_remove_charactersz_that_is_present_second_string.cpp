#include <bits/stdc++.h>
using namespace std;

void remove_characters_present_second_string(string str1, string str2)
{
  if(str1.size()<str2.size())
  return;

  int index=0;
  for(int i=0;i<str1.size();i++)
  {
      int j;
      for(j=0;j<str2.size();j++)
      {
          if(str1[i]==str2[j])
          break;
      }
      if(j==str2.size())
      str1[index++]=str1[i];
  }
 
  for(int i=0;i<index;i++)
  cout<<str1[i];

}

int main()
{
  string str1;
  cout<<"Enter first string\n";
  getline(cin, str1);

  string str2;
  cout<<"Enter second string\n";
  getline(cin, str2);
  
  remove_characters_present_second_string(str1, str2);

return 0;
}