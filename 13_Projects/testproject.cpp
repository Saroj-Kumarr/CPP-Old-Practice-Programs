/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

  /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 /*

Description : Income tax calculator for employee database
Author : Neha kumari
Date : 22 - 11 - 2022
Time : 9:15 PM

*/


#include<iostream>
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

    int Salary;

    int hra;
    int da;
    int pf;
    int netSalary;
    int tax;

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
        cin>>Salary;
    }
    

    
    

    void setHra(){
        cout<<"Enter hra of employee :"<<endl;
        cin>>hra;
    }
    

    void setDa(){
        cout<<"Enter da of employee :"<<endl;
        cin>>da;
        
    }
    void setPf(){
        cout<<"Enter pf of employee :"<<endl;
        cin>>pf;
        cout<<endl<<endl;
    }
    
    
    string getFirstName(){
        return firstName;
    }
    
    
    string getLastName(){
        return lastName;
    }
    

    string getGender(){
       return gender;
    }
    

    string getDateOfBirth(){
        return dateOfBirth;
    }
    

    string getPincode(){
        return pincode;
    }
    
    
    string getCountry(){
        return country;
    }
    

    string getState(){
        return state;
    }
    

    int getId(){
        return id;
    }
    
    
    int getAge(){
        return age;
    }
    
    
    int getSalary(){
        return Salary;
        
    }
    
    int getHra(){
        return hra;
    
    }

    int getDa(){
        return da;
    }
     int getPf(){
        return pf;
    }


    int getNetSalary(){
        netSalary=(Salary+(Salary*hra)/100+(Salary*da)/100-(Salary*pf)/100);
        return netSalary;
        
    }

    int gettax(){

        if(netSalary>=0&&netSalary<=250000)
        {
        tax=netSalary*0/100;
        }
        else if(netSalary>250000&&netSalary<=500000)
        {
        tax=netSalary*5/100;
        }
        else if(netSalary>500000&&netSalary<=750000)
        {
        tax=netSalary*10/100;
        }
        else if(netSalary>750000&&netSalary<=1000000)
        {
        tax=netSalary*15/100;
        }
        else if(netSalary>1000000&&netSalary<=1250000)
        {
        tax=netSalary*20/100;
        }
        else if(netSalary>1250000&&netSalary<=1500000)
        {
        tax=netSalary*25/100;
        }
        else
        {
        tax=netSalary*30/100;
        }
        return tax;
    }

};

                    
int main(){


int n;

cout<<"Total no of employee"<<endl;
cin>>n;


Employee e[n];

for(int i=0;i<n;i++){

    e[i].setFirstName();
    e[i].setLastName();
    e[i].setGender();
    e[i].setDateOfBirth();
    e[i].setPincode();
    e[i].setCountry();
    e[i].setState();
    e[i].setId();
    e[i].setAge();
    e[i].setSalary();
    e[i].setHra();
    e[i].setDa();
    e[i].setPf();

}

cout<<endl<<endl;

for(int i=0;i<n;i++){

    ofstream fout;
    fout.open("Temp.txt");
    fout.write((char*)&e[i], sizeof(e[i]));
    fout<<e[i].getFirstName()<<endl;
    fout<<e[i].getLastName()<<endl;
    fout<<e[i].getGender()<<endl;
    fout<<e[i].getDateOfBirth()<<endl;
    fout<<e[i].getPincode()<<endl;
    fout<<e[i].getCountry()<<endl;
    fout<<e[i].getState()<<endl;
    fout<<e[i].getId()<<endl;
    fout<<e[i].getAge()<<endl;
    fout<<e[i].getSalary()<<endl;
    fout<<e[i].getHra()<<endl;
    fout<<e[i].getDa()<<endl;
    fout<<e[i].getPf()<<endl;
    fout<<e[i].getNetSalary()<<endl;
    fout<<e[i].gettax()<<endl;

    fout.close();

    ifstream fin;
    fin.open("Temp.txt");
    fin.read((char*)&e[i], sizeof(e[i]));

    string e_name; 
    string e_firstName;
    string e_lastName;
    string e_gender;
    string e_dateOfBirth;
    string e_pincode;
    string e_country;
    string e_state;

    int e_id;
    int e_age;
    int e_salary;
    int e_hra;
    int e_da;
    int e_pf;
    int net_salary;
    int e_tax;

    fin>>e_firstName;
    fin>>e_lastName;
    fin>>e_gender;
    fin>>e_dateOfBirth;
    fin>>e_pincode;
    fin>>e_country;
    fin>>e_state;
    fin>>e_id;
    fin>>e_age;
    fin>>e_salary;
   
    fin>>e_hra;
    fin>>e_da;
    fin>>e_pf;
    fin>>net_salary;
     fin>>e_tax;

    fin.close();

    cout<<"********* Details of "<<(i+1)<<" Employee ***********"<<endl;
    
    cout<<"Name : "<<e_firstName<<" ";
    cout<<e_lastName<<endl;
    cout<<"Gender : "<<e_gender<<endl;
    cout<<"Date of birth : "<<e_dateOfBirth<<endl;
    cout<<"Pincode : "<<e_pincode<<endl;
    cout<<"Country : "<<e_country<<endl;
    cout<<"State : "<<e_state<<endl;
    cout<<"Id    : "<<e_id<<endl;
    cout<<"Age   : "<<e_age<<endl;
    cout<<"salary : "<<e_salary<<endl;
     
    cout<<"Hra   : "<<e_hra<<endl;
    cout<<"Da  : "<<e_da<<endl;
    cout<<"PF : "<<e_pf<<endl;
    
    cout<<"Net salary : "<<net_salary<<endl<<endl;
    cout<<"Tax paid : "<<e_tax<<endl;

}

return 0;
}