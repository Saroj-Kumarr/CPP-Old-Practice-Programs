#include<iostream>
using namespace std;

template<class t>
void test(t a){

    try{
        if(a>='48' && a<='57' ){
            throw a;
        }
        else if(a>='65' && a<='91' || a>='97' && a<='122'){
            throw a;
        }
        else{
            throw a;
        }
    }

        catch(int i){
            cout<<"integer exception found"<<i<<endl;
        }
        catch(char c){
            cout<<"character exception found"<<c<<endl;
        }
        catch(float f){
            cout<<"float exception found "<<f<<endl;
        }
    }

                    
int main(){

   test(10);

   
return 0;
}