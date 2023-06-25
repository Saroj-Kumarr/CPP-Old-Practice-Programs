
  #include<iostream>
  using namespace std;
                      
  
  string BalancedString(int N) {

        string str;
    
    int temp=0;
    int test=N;
    
        while(test>26){
        for(int i=97;i<=122;i++){
            str.push_back(char(i));
            }
            test=test-26;
            if(test<26)
            {
                N=test;
                break;
            }
        }

        cout<<N<<endl;
     int a,b;
     int x=N;
     int sumOfDigit=0;
     
     
    if(N%2==0)
    {
        a=N/2;
        b=N/2;
    }
    else
    {
        while(x!=0){
         sumOfDigit=sumOfDigit+x%10;
         x=x/10;
     }
  
     
      if(sumOfDigit%2==0){
          a=(N+1)/2;
          b=(N-1)/2;
      }
      else
      {
          a=(N-1)/2;
          b=(N+1)/2;
      }
    }
      
      for(int i=97;i<=(97+a-1);i++){
          str.push_back(char(i));
      }
      for(int i=(122-b+1);i<=122;i++){
          str.push_back(char(i));
      }

      return str;
    }
    int main(){
    
    cout<<BalancedString(57);
    
  return 0;
  }