#include <iostream>

using namespace std;


int main(){

    int num;
    cout << "num ::"<<endl;
    cin >> num ; 

    int  fact =1 ;


    // for (int i=1;i<=num;i++){
    //     fact  = fact *i;

    // }

    for(int i = num ; i>=1;i--){
        fact  = fact *i;

    }

    cout  << fact;
    return  0;
    
}