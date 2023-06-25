
#include<iostream>
using namespace std;

template<class t,int arraySize>

class arraylist{
    public:
    t num[arraySize];
    ;
    arrayList(){}
    void add(T n[]){
        for(int i=0;i<arraysize;i++){
            num[i]=n[i];
        }

    }

    void display(){
        for(int i=0;i<arraySize;i++){
          cout<<num[i]<<endl;
        }
    }

};

class derived:public arraylist<int,5>{

};
                    
int main(){

    int arr[5]={10,20,30,40,50};
    derived d1;
    d1.add(arr);


  
return 0;
}