#include<iostream>
using namespace std;

class saroj{

    public:


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
            cout<<"integer exception found "<<i<<endl;
        }
        catch(char c){
            cout<<"character exception found "<<c<<endl;
        }
        catch(float f){
            cout<<"float exception found "<<f<<endl;
        }
    }
    
};

                    
int main(){

   saroj s;

   s.test(10);

   s.test('c');
   
return 0;
}