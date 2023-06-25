#include<iostream>
using namespace std;
int main()
{
    int principle, rate, time, simple_interest;

    cout<<"enter principle rate and time"<<endl;
    cin>>principle>>rate>>time;
    
    simple_interest=(principle*rate*time)/100;
cout<<"simple interest is "<<simple_interest;
  
return 0;
}