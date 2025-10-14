#include <iostream>
using namespace std;


int main(){
    int num ; 
    cout << " enter the num : " << endl;
    cin >> num;

    if(num==0){
        cout << " you enered zero" <<endl;
    }
    else{
        int count = 0 ;
        while(num>0){
            num = num /10;
            count ++ ;
        }
        cout << " no of dig is ;:"  << count << endl;


    }


}