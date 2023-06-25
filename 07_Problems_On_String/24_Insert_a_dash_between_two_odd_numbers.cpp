#include <bits/stdc++.h>
using namespace std;

void Insert_dash(string num_str)
{

string result_str=num_str;

for(int i=0;i<num_str.size()-1;i++)
{
 if((num_str[i]=='1'||num_str[i]=='3'||num_str[i]=='5'||num_str[i]=='7'||num_str[i]=='9') &&
 (num_str[i+1]=='1'||num_str[i+1]=='3'||num_str[i+1]=='5'||num_str[i+1]=='7'||num_str[i+1]=='9'))
 {
     result_str.insert(i+1,"-");
     num_str=result_str;
 }
 
}
cout<<result_str;

}

int main()
{
    string str;
    cout<<"Enter a string of numbers\n";
    getline(cin, str);

    Insert_dash(str);
  
return 0;
}