#include <bits/stdc++.h>
using namespace std;
int main()
{
    time_t t=time(NULL);
    tm *tptr=localtime(&t);
    
    cout<<(tptr->tm_hour-12)<<" hours : ";
    cout<<tptr->tm_min<<" minutes : ";
    cout<<tptr->tm_sec<<" seconds"<<endl;
    cout<<tptr->tm_mday<<"-";
    cout<<(tptr->tm_mon)+1<<"-";
    cout<<(tptr->tm_year)+1900<<endl;


  
return 0;
}