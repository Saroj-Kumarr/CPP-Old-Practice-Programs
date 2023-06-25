#include <bits/stdc++.h>
using namespace std;
int main()
{
    int firstTerm, LastTerm ,sum=0;
    int commondiff;
    cout<<"enter number of first Term and last term \n";
    cin>>firstTerm>>LastTerm;
    cout<<"enter common difference\n";
    cin>>commondiff;

    sum=(LastTerm/2)*(2*firstTerm+(LastTerm-1)*commondiff);
    
    cout<<"The sum of Ap series is "<<sum;
return 0;
}