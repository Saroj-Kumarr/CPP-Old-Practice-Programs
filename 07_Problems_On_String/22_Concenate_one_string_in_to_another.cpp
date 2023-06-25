#include <bits/stdc++.h>
using namespace std;

void Concenate_string(string str1, string str2)
{

 string result;
 result=str1+str2;

 cout<<"Final string is : "<<result;

}


int main()
{
  
  string str1;
  cout<<"Enter first string\n";
  getline(cin, str1);

  string str2;
  cout<<"Enter second string\n";
  getline(cin, str2);  

  Concenate_string(str1, str2);
  
return 0;
}