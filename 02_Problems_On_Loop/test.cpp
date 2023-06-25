#include<iostream>
using namespace std;

int findLcm(int x,int y){
  int maximum=max(x,y);
  while(true){
    if(maximum%x==0 && maximum%y==0)
    {
        return maximum;
    }
    maximum++;
  }
}
                    
int main() {
    int x=20;
    int y=18;
    cout<<findLcm(x,y);
return 0;
}
