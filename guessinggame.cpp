#include <iostream>

using namespace std;

int main(){
    int HostNum,guessNum;
    cout << "HostNum::" <<endl;
    cin >> HostNum;
    system("cls");

    cout <<"Guessnum::" <<endl;
    cin >>guessNum;

    // if(HostNum ==guessNum ){
    //     cout << "Correct " <<endl;
    // }
    // else{
    //     cout << "incorrect " <<endl;
    // }

    //ternary operator

    (HostNum == guessNum ) ? cout <<"correct ": cout << "Failed";


    return 0;


}


