#include<iostream>
#include<cmath>
using namespace std;


bool isArmstrong(int x)
{
    int count=0;
    int temp1=x;
    int temp2=x;
    int sumofpower=0;
    int rem;


    while(temp1!=0)  //for counting digits
    {
        temp1=temp1/10;
        count++;

    }

    while(temp2!=0)  //for sum of cube of all digit
    {
        rem=temp2%10;
        sumofpower=sumofpower+pow(rem,count);
        temp2=temp2/10;
    }
    
    if(sumofpower==x)
    return true;
    else
    return false;

}

int main()
{

  int num;
  cout<<"enter a number\n";
  cin>>num;
  
  if(isArmstrong(num))
  cout<<num<<" is a Armstrong number\n";
  else
  cout<<num<<" is not a Armstrong number\n";

return 0;
}