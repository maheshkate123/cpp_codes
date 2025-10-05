#include <iostream>
//variables , data types 
using namespace std;

int main(){

    int year =1995;
    cout << "year is :" <<  year <<endl;

    bool isright = true;
    float num =13.13;
    double salary= 450000.4344;
    char gender = 'f';
    string name = "Raj";

    //size 
    cout << "size of int :" << sizeof(int) << endl;
    cout << "Int min vvalue is " <<INT64_MIN << endl;

    cout << "sixe of insigned int is :" << sizeof(unsigned int) << endl;

    cout << "size of int :" << sizeof(int) << endl;
    cout << "size of float :" << sizeof(float) << endl;
    cout << "size of bool :" << sizeof(bool) << endl;
    cout << "size of double :" << sizeof(double) << endl;
    cout << "size of string :" << sizeof(string) << endl;


   //overflow
   
   int intMax = INT8_MAX;
   cout << intMax << endl;
   cout << intMax + 1 ;


    return 0;
}