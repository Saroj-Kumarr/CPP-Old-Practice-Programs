#include <bits/stdc++.h>
using namespace std;

void Print_non_repeating_character(string str)
{
    for(int i=0;i<str.size();i++)
    {  
         int check=0;
        for(int j=0;j<str.size();j++)
        {
            if(str[i]==str[j])
            check++;
        }

        if(check==1)
        cout<<str[i]<<" ";
    }

}

int main()
{
    string str;
    cout<<"enter a string \n";
    getline(cin, str);

    Print_non_repeating_character(str);

return 0;
}