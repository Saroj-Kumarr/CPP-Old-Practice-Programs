#include <bits/stdc++.h>
using namespace std;
int Calculate_sum_of_number(string str)
{
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='0' && str[i]<='9')
        sum=sum+((int)str[i]-48);
    }

    return sum;

}


int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin, str);

    cout<<"Sum of number is :"<<Calculate_sum_of_number(str);
  
return 0;
}