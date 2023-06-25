#include <bits/stdc++.h>
using namespace std;

bool IsAnagram(string str1, string str2)
{
    if(str1.size()!=str2.size())
    return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i=0;i<str1.size();i++)
    {

    if(str1[i]!=str2[i])
    return false;

    }
    return true;

}

int main()
{
  string str1;
  cout<<"Enter first string\n";
  getline(cin, str1);

  string str2;
  cout<<"Enter second string\n";
  getline(cin, str2);

  if(IsAnagram(str1, str2))
  cout<<"strings are anagram of each other\n";
  else
  cout<<"string are not anagram of each other\n";


return 0;
}