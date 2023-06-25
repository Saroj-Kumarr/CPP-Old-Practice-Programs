#include <bits/stdc++.h>
using namespace std;

class employee
{
    private:
      int eid;
      string ename;

      public:
       employee(int eid=0, string ename={"unknown"})
       {
           this->eid=eid;
           this->ename=ename;

       }

       int geteid()
       {
           return eid;
       }

       string getename()
       {
           return ename;
       }

};

class fulltime_employee: public employee
{
 private:
   int salary;

 public:
   fulltime_employee(int i, string n, int s): employee(i,n)
   {
       salary=s;
   }

   void display()
   {
       cout<<"employee id "<<geteid()<<endl;
       cout<<"employee name "<<getename()<<endl;
       cout<<"salary "<<salary<<endl;
   }
    
};

class parttime_employee: public employee
{
 private:
   int wage;

 public:
   parttime_employee(int i, string n, int w): employee(i,n)
   {
       wage=w;
   }

   void display()
   {
       cout<<"employee id "<<geteid()<<endl;
       cout<<"employee name "<<getename()<<endl;
       cout<<"wage "<<wage<<endl;
   }
};

int main()
{
fulltime_employee p1(1,"ram",30000);
parttime_employee p2(2,"shyam",1000);

p1.display();
p2.display();
  
return 0;
}