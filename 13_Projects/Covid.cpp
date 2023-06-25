#include<iostream>
#include<fstream>
using namespace std;

class student{

    char name[20];
    char city[20];
    int rollNo;

    public:

    void setData(){
        cout<<"enter name, city and rollNo"<<endl;
        cin>>name>>city>>rollNo;
    }

    void getData(){
        cout<<"name is "<<name<<endl;
        cout<<"city is "<<city<<endl;
        cout<<"rollNo is "<<rollNo<<endl;
    }
};
                    
int main(){

    student stu;
    stu.setData();

   ofstream fout;
   fout.open("Sample.txt");

   fout.write((char*)&stu, sizeof(stu));
   fout.close();

   ifstream fin;
   fin.open("sample.txt");

   student stu1;

   fin.read((char*)&stu1, sizeof(stu1));

  stu1.getData();

  fin.close();

return 0;
}