#include <bits/stdc++.h>
using namespace std;
int main()
{
    int firstTerm, LastTerm ,sum=0;
    int commondiff;
    cout<<"enter first Term and last term \n";
    cin>>firstTerm>>LastTerm;
    cout<<"enter common difference\n";
    cin>>commondiff;

    sum=firstTerm*((pow(commondiff, LastTerm)-1))/(commondiff-1);

    cout<<"The sum of Gp series is "<<sum;
  
return 0;
}