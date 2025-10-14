#include <iostream>
// number from 100-500 div by 3 and 5
using namespace std;

int main(){

    int num = 100;

    while(num<=500){
        if(num%3==0 && num%5==0){
            cout << num << " is divisible by 3 and 5"<< endl;
        }   
         num ++;  
    }
    return 0;
}