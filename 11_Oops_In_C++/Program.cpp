#include<iostream>
using namespace std;

class discount{
    private:

    int mobilePrice;
    int powerbankPrice;
    float mobileDiscount;
    float powerbankDiscount;
    float mobileAndPowerbankfinalDiscount;


    public:

    void getMobilePrice(){
        cout<<"enter mobile price : ";
        cin>>mobilePrice;
    }

    void getPowerbankPrice(){
        cout<<"enter powerbank price : ";
        cin>>powerbankPrice;
    }
    
    float mobilePurchaseDiscount(){
        mobileDiscount=(mobilePrice*10)/100;
        return mobileDiscount;
    }
    float powerbankPurchaseDiscount(){
        powerbankDiscount=(powerbankPrice*5)/100;
        return powerbankDiscount;
    }

};
                    
int main(){

    discount d;

    while(1){
        int choice;

        cout<<"enter choice : "<<endl;

        cout<<"1.for mobile"<<endl;
        cout<<"2.for powerbank"<<endl;
        cout<<"3.for exit"<<endl;

        cin>>choice;

        switch(choice){
            case 1:
                  d.getMobilePrice();
                  d.mobilePurchaseDiscount();
                  break;

            case 2: 
                  d.getPowerbankPrice();
                  d.powerbankPurchaseDiscount();
                  break;

           case 3:
                 exit(0);

         default:
                cout<<"invalid input"<<endl;

                  
        }


    }


    d.getMobilePrice();
    d.mobilePurchaseDiscount();

    d.getPowerbankPrice();
    d.powerbankPurchaseDiscount();


return 0;
}