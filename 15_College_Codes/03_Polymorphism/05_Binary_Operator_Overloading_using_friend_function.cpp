
#include<iostream>
#include<fstream>
using namespace std;
					
int main(){
	ofstream fout("temp.txt");
	fout<<"Good"<<endl;
	fout.close();
  
return 0;
}