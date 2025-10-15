#include <iostream>

using namespace std;

int main(){

    cout << " Hello World  " << endl;    // printing on console
    int a=13;
    float f = 3.34;                        // date types 
    double d  = 34.44353454;
    char c ='K';
    bool is = "true";
    string str = "Maharashtra";

    // int num ;                      // user input 
    // cout << " enter the num::" << endl;
    // cin >> num ; 

    // // cout  << num ; 

    // if(num>=0){                                        // entered num is posiitvie or negative 
    //     cout << num << " is positive " ; 

    // }else{
    //     cout << num << " is negative ";
    // }



    // int age ;
    // cout <<" enter age:" << endl;
    // cin >> age;

    // if(age>=18){                                              // voter eligibilty to vote
    //     cout <<  "voter is eligible for voting " << endl;
    // }else{
    //     cout << " voter is not eligile " << endl;
    // }


    // 1-50 even num

    // for(int i=1;i<=50;i++){
    //     if(i%2==0){
    //         cout << i << " is even " <<endl;
    //     }else{
    //         cout << i << " is odd " <<endl;

    //     }
    // }

    // loops

    // for(int i=1;i<=10;i++){              // for
    //     cout << i <<endl;
    // }
    // cout << endl;
    // for(int j=12;j>=2;j--){
    //     cout << j << endl;
    // }

    // int i=14;
    // while(i>=3){                  // while
    //     cout << i<<endl;
    //     i--;
    // }

    // cout << endl;

    // int j=1;
    // while(j<=21){
    //     cout <<j <<endl;
    //     j++;
    // }


    // int k=1;             //do while
    // do{
    //     cout<< k <<endl;
    //     k++;
    // }while(k<=23);


    int r=50;                           
    do{
        if(r%2==0){
            cout << r <<endl;
        }
        r--;
    }while(r>=20);



    return 0;
}