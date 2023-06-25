#include<iostream>
using namespace std;

int msg() throw(string){
    throw "error";
}
                    
int main(){

msg();
  
return 0;
}