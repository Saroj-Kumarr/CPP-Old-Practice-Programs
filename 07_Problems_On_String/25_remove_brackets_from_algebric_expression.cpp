#include <bits/stdc++.h>
using namespace std;

void remove_brackests_from_algebric_expression(string str)
{
 string result;
 for(int i=0;i<str.size();i++)
 {
     if(str[i]!='(' && str[i]!=')')
     result.push_back(str[i]);
 }

 cout<<result;

}

int main()
{
  string str;
  cout<<"enter a string\n";
  getline(cin, str);

  remove_brackests_from_algebric_expression(str);

return 0;
}