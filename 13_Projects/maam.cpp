#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class student
{
    int rollno;
    char name[20],city[30];
public:
    void getdata()
    {
        cout<<" Enter name, city and rollno"<<endl;
        cin>>name>>city>>rollno;
    }
    void display()
    {
        cout<<"The name is "<<name<<endl;
        cout<<"The city is "<<city<<endl;
        cout<<"The rollno is "<<rollno<<endl;
    }
};

int main()
{
    student obj;
    obj.getdata();
    ofstream outf;
    outf.open("testtt.dat");
    outf.write((char *)&obj, sizeof(obj));  // Writing into file
    outf.close();

    ifstream inf;
    inf.open("testtt.dat");
    student obj1;
    inf.read((char *)&obj1, sizeof(obj1));  //reading from file
    obj1.display();
    inf.close();

    return 0;
}


