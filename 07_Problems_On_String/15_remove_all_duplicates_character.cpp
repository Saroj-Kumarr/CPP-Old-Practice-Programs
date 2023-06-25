#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(string str)
{
 
 int index=0, i;

 for(i=0;i<str.size();i++)
 {
    int j;
    for(j=0;j<i;j++)
    {
        if(str[i]==str[j])
        break;
    }

  if(i==j)
  str[index++]=str[i];

 }
 for(int i=0;i<index;i++)
 cout<<str[i];
  

}

int main()
{
  string str;
  cout<<"enter a string\n";
  getline(cin, str);

  remove_duplicate(str);
  
return 0;
}