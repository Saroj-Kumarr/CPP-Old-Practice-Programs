#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("student.txt");

    string name;
    int rollno;
    string branch;

    ifs>>name>>rollno>>branch;
    ifs.close();

    cout<<name<<endl;
    cout<<rollno<<endl;
    cout<<branch<<endl;

return 0;
}