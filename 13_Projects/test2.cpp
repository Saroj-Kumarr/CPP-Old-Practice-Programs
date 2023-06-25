/*

Description : Income tax calculator for employee database
Author : Neha kumari
Date : 22 - 11 - 2022
Time : 9:15 PM

*/



#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;

class Employee{

    private:
    
    string firstName;
    string lastName;
    string gender;
    string dateOfBirth;
    string pincode;
    string country;
    string state;

    int id;
    int age;

    float salary;
    float tax;
    float hra;
    float da;
    float paidTax;
    float netSalary;

    public:

    void setFirstName(){
        cout<<"Enter first name of employee :"<<endl;
        cin>>firstName;
    }
    
    
    void setLastName(){
        cout<<"Enter last name of employee :"<<endl;
        cin>>lastName;
    }
    

    void setGender(){
        cout<<"Enter gender of employee"<<endl;
        cin>>gender;
    }
    

    void setDateOfBirth(){
        cout<<"Enter date of birth of employee :"<<endl;
        cin>>dateOfBirth;
    }
    

    void setPincode(){
        cout<<"Enter pincode of employee :"<<endl;
        cin>>pincode;
    }
    
    
    void setCountry(){
        cout<<"Enter country of employee :"<<endl;
        cin>>country;
    }
    

    void setState(){
        cout<<"Enter state of employee :"<<endl;
        cin>>state;
    }
    

    void setId(){
        cout<<"Enter id of employee :"<<endl;
        cin>>id;
    }
    
    
    void setAge(){
        cout<<"Enter age of employee :"<<endl;
        cin>>age;
    }
    
    
    void setSalary(){
        cout<<"Enter salary of employee :"<<endl;
        cin>>salary;
    }
    

    void setTax(){
        cout<<"Enter tax of employee :"<<endl;
        cin>>tax;
    }
    

    void setHra(){
        cout<<"Enter hra of employee :"<<endl;
        cin>>hra;
    }
    

    void setDa(){
        cout<<"Enter da of employee :"<<endl;
        cin>>da;
    }

    
    void getPaidTax(){
        paidTax=(salary*tax)/100;
       
    }
    
    
    void getNetSalary(){
        netSalary=(salary+(salary*hra)/100+(salary*da)/100-(salary*tax)/100);
    }


    void display(){

        cout<<"Name of employee : "<<firstName<<" "<<lastName<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Date-of-birth : "<<dateOfBirth<<endl;
        cout<<"Pincode : "<<pincode<<endl;
        cout<<"Country : "<<country<<endl;
        cout<<"State : "<<state<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Tax : "<<tax<<endl;
        cout<<"Hra : "<<hra<<endl;
        cout<<"Da : "<<da<<endl;
        cout<<"paidTax : "<<paidTax<<endl;
        cout<<"Netsalary : "<<netSalary<<endl;

    }

};


                    
int main(){

    Employee e1;

    e1.setFirstName();
    e1.setLastName();
    e1.setGender();
    e1.setDateOfBirth();
    e1.setPincode();
    e1.setCountry();
    e1.setState();
    e1.setId();
    e1.setAge();
    e1.setSalary();
    e1.setTax();
    e1.setHra();
    e1.setDa();
    e1.getPaidTax();
    e1.getNetSalary();

    ofstream fout;
    fout.open("Neha.txt");
    fout.write((char*)&e1, sizeof(e1));
    fout.close();


    Employee e2;

    ifstream fin;
    fin.open("Neha.txt");
    fin.read((char*)&e2, sizeof(e2));
    fin.close();

    e2.display();


return 0;
}