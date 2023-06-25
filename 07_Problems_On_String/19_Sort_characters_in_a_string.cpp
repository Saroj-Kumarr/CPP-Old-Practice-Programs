#include <bits/stdc++.h>
using namespace std;
void Sort_characters(string str)
{

for(int i=0;i<str.size()-1;i++)
{
    for(int j=0;j<str.size()-i-1;j++)
    {
      if(str[j]>str[j+1])
      swap(str[j], str[j+1]);

    }
}

cout<<str;

}

int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin, str);

    Sort_characters(str);
  
return 0;
}