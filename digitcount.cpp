#include <iostream>

using namespace std;

int main(){
    int num ;
    cout << "enter the nun::"<<endl;
    cin >>num;

    if(num==0){
        cout << " you are entered zero " <<endl;
    }
    else{
        if (num <0){
            num = -num;
        }

        int counter = 0;
        while(num  > 0){
            num /= 10;   // num = num/10
            counter ++;
        }
        cout <<counter<<endl;
    }

    return 0;
}
