#include <bits/stdc++.h>
using namespace std;

class student
{
    private:
      string name;
      int roll;
      string branch;

    public:
        student()
        {

        }

        student(string s, int r, string b)
        {
            name=s;
            roll=r;
            branch=b;
        }

     friend ofstream & operator<<(ofstream &ofs, student &s);
     friend ifstream & operator>>(ifstream &ifs, student &s);
     friend ostream & operator<<(ostream &out, student &s);

};

ofstream & operator<<(ofstream &ofs, student &s)
{
  ofs<<s.name<<endl;
  ofs<<s.roll<<endl;
  ofs<<s.branch<<endl;

  return ofs;
}

ifstream & operator>>(ifstream &ifs, student &s)
{
    ifs>>s.name>>s.roll>>s.branch;

    return ifs;
}

ostream & operator<<(ostream &out, student &s)
{
    out<<"name = "<<s.name<<endl;
    out<<"roll = "<<s.roll<<endl;
    out<<"branch = "<<s.branch<<endl;

    return out;
}

int main()
{

    ofstream ofs("student.txt");

    student s("saroj",10,"cs");

    ofs<<s;
    ofs.close();

    ifstream ifs("student.txt");
    ifs>>s;
    ifs.close();

    cout<<s<<endl;

return 0;
}