#include <bits/stdc++.h>
using namespace std;

int Count_words(string str)
{
  int count=0;

  for(int i=0;i<str.size();i++)
  {
      if(str[i]==' ')
      count++;
  }

  return (count+1);

}

int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin, str);

    cout<<"Total words are : "<<Count_words(str);

return 0;
}