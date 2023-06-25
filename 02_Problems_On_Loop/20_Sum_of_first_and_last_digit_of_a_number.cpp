#include <bits/stdc++.h>
using namespace std;

int getSumOfFirstAndLastDigit(int num){

int firstDigit;
int lastDigit;

for(firstDigit=num;firstDigit>=10;firstDigit=firstDigit/10);
lastDigit=num%10;

    return (firstDigit+lastDigit);

}
int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;
    cout<<"sum of first and last digit is "<<getSumOfFirstAndLastDigit(num);

return 0;
}
