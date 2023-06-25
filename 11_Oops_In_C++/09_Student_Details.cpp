#include <bits/stdc++.h>
using namespace std;

class student
{
    private:
      int roll_num;
      string name;
      int mathmark;
      int phymark;
      int chemark;

    public:
    student (int r, string n, int m, int p, int c)
    {
        roll_num=r;
        name=n;
        mathmark=m;
        phymark=p;
        chemark=c;
    }

    int total_mark()
    {
        return(mathmark+phymark+chemark);
    }

    char grade()
    {
        float average=total_mark()/3;
        if(average>=60)
        return 'A';

        else if(average>=45 && average<60)
        return 'B';

        else
        return 'C';
    }

};

int main()
{
    int r,m,p,c;
    string n;

    cout<<"enter student roll number\n";
    cin>>r;

    cout<<"enter name\n";
    cin>>n;

    cout<<"enter math mark\n";
    cin>>m;

    cout<<"enter physics mark\n";
    cin>>p;

    cout<<"enter chemistry mark\n";
    cin>>c;

    student s(r, n, m, p, c); 

    cout<<"total mark is "<<s.total_mark()<<endl;
    cout<<"total grade is "<<s.grade()<<endl;
  
return 0;
} 