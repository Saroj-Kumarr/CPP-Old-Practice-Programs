#include <bits/stdc++.h>
using namespace std;

  void Digit_To_Word(int num)
  {
   int digit, divide, x;
    
    x=log10(num);
    divide=pow(10,x);
  
       while(num!=0)
    {
        digit=num/divide;

        switch(digit)
        {
            case 0:
                  cout<<"zero"<<" ";
                  break;
            case 1:
                  cout<<"one"<<" ";
                  break;
            case 2:
                  cout<<"two"<<" ";
                  break;
            case 3:
                  cout<<"three"<<" ";
                  break;
            case 4:
                  cout<<"four"<<" ";
                  break;
            case 5:
                  cout<<"five"<<" ";
                  break;
            case 6:
                  cout<<"six"<<" ";
                  break;
            case 7:
                  cout<<"seven"<<" ";
                  break;
            case 8:
                  cout<<"eight"<<" ";
                  break;
            case 9:
                  cout<<"nine"<<" ";
                  break;
         }

        num=num%divide;
        divide=divide/10;

      } 

  }

int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;

    Digit_To_Word(num);

return 0;
}