#include <bits/stdc++.h>
using namespace std;

void Count_vowel_consonant_and_spaces(string str)
{
int length=str.length();

int vowels=0;
int consonants=0;
int spaces=0;

    for(int i=0;i<length;i++)
    {
        str[i]=towlower(str[i]);
    }

    for(int i=0;i<length;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        vowels++;
        else if(str[i]>='a' && str[i]<='z')
        consonants++;
        else if(str[i]==' ')
        spaces++;
    }

cout<<"total vowels are : "<<vowels<<endl;
cout<<"total consonants are : "<<consonants<<endl;
cout<<"total white spaces are : "<<spaces;

}

int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin, str);

    Count_vowel_consonant_and_spaces(str);
  
return 0;
}