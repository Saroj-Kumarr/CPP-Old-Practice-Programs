#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string\n";
    getline(cin,str);

    int size=str.size();  //------------> size()
    cout<<"size is "<<size<<endl;

    int length=str.length(); //-----------> length()
    cout<<"length is "<<length<<endl;

    string sub_str;
    sub_str=str.substr(2,4);    //-------->substr()
    cout<<sub_str<<endl;

    string str2="i hate you";
    if(str2.compare(str)==0)    //-------->compare()
    cout<<"equal"<<endl;
    else
    cout<<"not equal"<<endl;

    string str3;
    str3=str;                  //----------->copy()
    cout<<str3<<endl;

    reverse(str.begin(), str.end());
    cout<<str<<endl;

     string str4=" baby";
     str.append(str4);         //--------->append()
     string result=str+str4;   
     cout<<str<<endl;    

     str.erase(2,4);          //--------->erase()
     cout<<str<<endl;

     int index=str.find("you");  //------>find()
     cout<<index<<endl;


     str.insert(2,"hate");      //------->insert()
     cout<<str<<endl;


     sort(str.begin(), str.end());  //------>sort()
     cout<<str<<endl;

     str.clear();             //---------->clear()
     cout<<str<<endl;

     cout<<str.empty()<<endl;     //------------>empty()

      string str5="786";
      int x=stoi(str5);           //---------->stoi()
      cout<<x<<endl;

    int num=786;
    cout<<to_string(num);     //------------->to_string()


    
  
return 0;
}