#include<stdlib.h>
 #include<iostream>
 #include<string>

using namespace std;
class student
{
    protected:
    int roll;
    string name;
    string course;
};

class result: public student
{
    protected:
    int sem,m1,m2,m3;
    public:
    void input()
    {
        cout<<"Enter roll,name,course"<<endl;
        cin>>roll;
        fflush(stdin);
        getline(cin,name);
        getline(cin,course);

        cout<<"sem and marks in 3 subjects";
          
        cin>>sem;
        cin>>m1;
        cin>>m2;
        cin>>m3;
    }
    
    void output()
    {
        float t,p;
        t=m1+m2+m3;
        p=t/3;
        cout<<roll<<"\t"<<name<<"\t"<<course<<"\t"<<sem<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<t<<"\t"<<p<<endl;

    }
};
int main()
{
    result r;
    r.input();
    r.output();
    return 0;

}