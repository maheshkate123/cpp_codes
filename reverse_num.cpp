#include <iostream>
using namespace std;

int main(){
    int num , rev_num =0;
    cout << " enter the num ::" << endl;
    cin >> num ;
    
    while(num!=0){
        rev_num *=10;
        rev_num+=num%10;
        num /=10;
    } 

    cout << "reversed num ::" << rev_num <<endl;
    




}