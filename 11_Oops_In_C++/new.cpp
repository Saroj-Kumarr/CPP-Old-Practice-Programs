#include<iostream>
using namespace std;

class employee{

    public:
    float salary;
    float netSalary;

    void getnetSalary(){

        cout<<"enter your salary"<<endl;
        cin>>salary;
        
        float tax=salary*40/100;

        float da=salary*20/100;

        float hra=salary*30/100;

        netSalary=salary-tax+da+hra;

        cout<<"Your netSalary is "<<netSalary<<endl;
 
    }


};
                     
int main(){

employee e[3];

for(int i=0;i<3;i++)
{
e[i].getnetSalary();
}

  
return 0;
}