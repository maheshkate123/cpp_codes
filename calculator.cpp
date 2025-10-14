#include <iostream>
using namespace std;

int main(){
    float a,b;
    char operation;
    cout << "CALCULATOR::" <<endl;
    cin >> a >>operation >> b;

    switch(operation){
        case '+':cout <<a<<operation<<b<<"="<<a+b<<endl;
        break;
        case '-':cout <<a<<operation<<b<<"="<<a-b;
        break;
        case '/':cout <<a<<operation<<b<<"="<<a/b;
        break;
        case '*':cout <<a<<operation<<b<<"="<<a*b;
        break;

        case '%':
            bool isaInt , isbInt;
            isaInt =((int)a == a);
            isbInt =((int)b ==b);

            if(isaInt && isbInt)
                cout << a << operation << b << "=" <<(int)a %(int)b;
            else
                cout << "Not valid..........!";
            break;
    default : cout << "NOT VALID OPERATION" <<endl;
            
    }

}


