#include<iostream>
#include<fstream>
using namespace std;

                    
int main(){

    char name[20];
    int m1,m2,m3;

    cout<<"enter name, mark1, mark2 and mark3 "<<endl;
    cin>>name>>m1>>m2>>m3;

    ofstream fout("sonu.txt");
 
    fout<<name<<"\n";
    fout<<m1<<"\n";
    fout<<m2<<"\n";
    fout<<m3<<"\n";  

    fout.close();

    ifstream fin("sonu.txt");

    char name2[20];
    int mark1,mark2,mark3;
    float total;
    float percentage;

    fin>>name2;
    fin>>mark1;
    fin>>mark2;
    fin>>mark3;
    


    total=mark1+mark2+mark3;

    percentage=total/3;

    cout<<"name of student : "<<name2<<endl;
    cout<<"total : "<<total<<endl;
    cout<<"percentage : "<<percentage<<endl;

    fout<<total<<"\n";
    fout<<percentage<<"\n";

    fin.close();

  
return 0;
}