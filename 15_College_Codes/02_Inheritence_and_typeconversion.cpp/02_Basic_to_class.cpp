#include<iostream>
using namespace std;

class Time{
    int hours;
    int minutes;

    public:

    Time(int x){
        hours=x/60;
        minutes=x%60;
    }

    void showTime(){
        cout<<hours<<" hours "<<minutes<<" minutes "<<endl;
    }

};
                    
int main(){

    int x=100;
    
    Time t(x);

    t.showTime();
  
return 0;
}