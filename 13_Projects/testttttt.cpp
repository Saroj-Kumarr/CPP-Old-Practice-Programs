#include<iostream>
using namespace std;

template<class t> 
void Calculate_netsalary(t salary, t hra, t da , t tax){

    string name;
    int id;

    cout<<"Enter name of employee : ";
    getline(cin,name);

    cout<<"Enter id of employee : ";
    cin>>id;

    fflush(stdin);
    
    t paidTax;
    paidTax=((salary*tax)/100);

    t finalSalary;
    finalSalary=(salary+(salary*hra)/100+(salary*da)/100-(salary*tax)/100);

      cout<<"Name of employee : "<<name<<endl;
      cout<<"Id of employee : "<<id<<endl;
      cout<<"Tax that is paid : "<<paidTax<<endl;
      cout<<"Net salary is : "<<finalSalary<<endl;

}
                    
int main(){

    Calculate_netsalary(1000,5,10,20);

    Calculate_netsalary(1050.50,5.5,10.5,20.5);

  
return 0;
}