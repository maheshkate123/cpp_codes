#include <iostream>
using namespace std;

int main(){
    int num , fact =1;
    cout << "enter the  num :" << endl;
    cin >> num;

    if(num>0){
        cout << " can't define the factorial" << endl;
    }else{
        for(int i=1;i<=num;i++){
            fact =fact *i;
        }

        cout << " factorial of  " << num << " is  " << fact << endl;;
    }

    return 0;

}