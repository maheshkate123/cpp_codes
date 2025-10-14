#include <iostream>
using namespace std;

int main(){
    //entered num is _ve /+ve
    int num,rev_num =0;
    cout << "num::" << endl;

    cin >> num ;
    // // cout << " the num is ::" <<num ; 

    // if(num>=0){
    //     cout << num << " is positive " << endl;

    // }else{
    //     cout << num << " is negative" << endl;
    // }

    //multiplication table 

    // for(int i=1;i<=10;i++){
    //     cout << num << "*" << i << " = " <<num*i << endl;

    //     }

    // 1-50 even odd num

    // for(int i=1;i<=50;i++){
    //     if(i%2==0){
    //         cout << i << " is even" << endl;
    //     }
    //     else{
    //         cout << i << " is odd" << endl;
    //     }
    // }
    
    //reverse num 
    while(num!=0){       // 345
        rev_num *=10;     //
        rev_num+= num %10;
        num/=10;

    }

    cout << "reverse_num::" << rev_num;




    return 0;
    
}