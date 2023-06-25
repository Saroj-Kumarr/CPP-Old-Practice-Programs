#include<iostream>
using namespace std;

class student{
    private:
    int roll_no;
    string s;

   public:

 
    void setName(){
        cout<<"enter a name"<<endl;
        getline(cin,s);
    }

    void getName(){
        cout<<s;
        
    }
};
                    
int main(){
    student s;
    s.setName();
    s.getName();

  
return 0;
}