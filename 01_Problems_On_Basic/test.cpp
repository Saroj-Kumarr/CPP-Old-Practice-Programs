#include<iostream>
#include<cmath>
using namespace std;
                    
float getCompoundInterest(float principle, float rate, float time){
    float compoundInterest;
    float finalAmount=principle*(pow((1 + rate / 100), time));
    float compoundInterest=finalAmount-compoundInterest;
    return compoundInterest;
}