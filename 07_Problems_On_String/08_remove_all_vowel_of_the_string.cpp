 #include <bits/stdc++.h>
 using namespace std;

 void remove_all_vowels_of_the_string(string str)
 {
  for(int i=0;str[i]!=0;i++)
  {
      str[i]=towlower(str[i]);
  }

  int j=0;
  int i=0;
  
  while(str[i])
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    i++;
    else
    str[j++]=str[i++];
    
  }

  for(int i=0;i<j;i++)
  cout<<str[i];

 }


 int main()
 {
     string str;
     cout<<"enter a string \n";
     getline(cin, str);

     remove_all_vowels_of_the_string(str);
   
 return 0;
 }