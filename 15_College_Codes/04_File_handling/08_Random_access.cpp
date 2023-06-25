
#include<iostream>
#include<fstream>
using namespace std;

    /* 
    1. seekg() - Move the get pointer to the specified location. (reading mode)
	2. seekp() - Move the put pointer to the specified location. (writing mode)
	3. tellg() - Gives the current position of get pointer.      (reading mode)
	4. tellp() - Gives the current position of put pointer.      (writing mode)
    */

                    
int main(){

    string str;
    cout<<"Enter a string : "<<endl;
    getline(cin,str);

    ofstream fout;
    fout.open("saroj.txt");

    cout<<fout.tellp()<<endl;

    fout<<str<<endl;

    cout<<fout.tellp()<<endl;

    fout.seekp(10,ios::beg);

    fout<<"abhishek kumar"<<endl;

    fout.seekp(-5,ios::end);

    fout<<"hello world"<<endl;

     fout.close();


return 0;
}