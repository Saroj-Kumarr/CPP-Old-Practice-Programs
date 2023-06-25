#include<iostream>
#include<fstream>
using namespace std;


                    
int main(){

    char name[20];

    int rollNo;

    char city[20];

    cout<<"enter name, rollno, and city "<<endl;
    cin>>name>>rollNo>>city;

    ofstream outf("check.txt");

    outf<<name<<"\n";
    outf<<rollNo<<"\n";
    outf<<city<<"\n";

    outf.close();

    int x;

    string str1,str2;

    ifstream inf("check.txt");

    inf>>str1;

    inf>>x;

    inf>>str2;

    inf.close();

    cout<<"name  "<<name<<endl;
    cout<<"roll no "<<x<<endl;
    cout<<"city "<<str2<<endl;


    inf.close();
   

return 0;
}