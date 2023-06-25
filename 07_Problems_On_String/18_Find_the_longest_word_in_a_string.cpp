#include <bits/stdc++.h>
using namespace std;

void Find_the_longest_word(string str, string &max_word)
{
   int length=str.length();
   int max_word_length=0, max_word_start=0;
   int i=0,j=0;

   while (j<=length)
   {
     if(j<length && str[j]!=' ')
     j++;

     else
     {
      int current_word_length=j-i;
       if(max_word_length<current_word_length)
       {
         max_word_length=current_word_length;
         max_word_start=i;
       }
       j++;
       i=j;
     }
   }

  max_word=str.substr(max_word_start, max_word_length);

}


int main()
{
    string str, max_word;
    cout<<"Enter a string\n";
    getline(cin, str);

Find_the_longest_word(str, max_word);  

cout<<"The longest word id : "<<max_word;
  
return 0;
}