#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
      int rollNo;
      string name;
      static int addNo;

      Student(string n)
      {
          addNo++;
          rollNo=addNo;
          name=n;
      }

      void display()
      {
          cout<<"name "<<name<<endl;
          cout<<"roll no "<<rollNo<<endl;
      }

};

int Student:: addNo=0;

int main()
{
    Student s1("saroj");
    Student s2("manoj");
    Student s3("sushil");

    s1.display();
    s2.display();
    s3.display();
    
    cout<<"total addmission is "<<Student::addNo<<endl;

return 0;
}