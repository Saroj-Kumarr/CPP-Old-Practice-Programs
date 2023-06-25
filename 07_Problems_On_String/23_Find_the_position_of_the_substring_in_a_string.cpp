#include <bits/stdc++.h>
using namespace std;

int Find_the_position_of_the_second_string(string str1, string str2)
{ 

for(int i=0;i<str1.size();i++)
{
    int j=0;
    int temp=i;

     for(j=0;j<str2.size();j++)
     {
      if(str1[temp]!=str2[j])
      break;

      temp++;
     }

     if(j==str2.size())
     return i;

}

return -1;

}

int main()
{
  string str1;
  cout<<"Enter first string\n";
  getline(cin, str1);

  string str2;
  cout<<"Enter second string\n";
  getline(cin, str2);  

  int pos=Find_the_position_of_the_second_string(str1, str2);
  if(pos>=0)
  cout<<"Position of second string is :"<<pos<<endl;
  else 
  cout<<"Not present is first string\n";

return 0;
}