#include<iostream>
using namespace std;
bool Isleapyear(int N){
  if ((N%4==0 && N%100!=0) || N%400==0)
   return 1;
else
   return 0;
}
                    
int main(){
  int year;
  cout<<"enter a year "<<endl;
  cin>>year;


int test=Isleapyear(year);
if(test==1)
{
    cout<<year<<" is leap year";
}
else{
    cout<<year<<" is not a leap year";
}


return 0;
}