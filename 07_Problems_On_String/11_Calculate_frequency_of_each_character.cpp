#include <bits/stdc++.h>
using namespace std;

void Calculate_frequency_of_characters(string str)
{

 sort(str.begin(), str.end());
 char ch=str[0];
 int count=1;

 for(int i=1;i<=str.size();i++)
 {
     if(str[i]==ch)
     count++;
    
     else 
     {
         cout<<ch<<" "<<count<<endl;
         ch=str[i];
         count=1;
     }
     
 }


}

using namespace std;
int main()
{
  string str;
  cout<<"Enter a string\n";
  getline(cin, str);

  Calculate_frequency_of_characters(str);

return 0;
}