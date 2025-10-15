#include <iostream>
using namespace std;


class Calculator{
public:   
    int x,y;

void add(){
    int c =  x+y;
    cout << c <<endl;

}
void substract(){
    int c =  x-y;
    cout << c <<endl;

}
void mul(){
    int c =  x*y;
    cout << c <<endl;


}
void div(){
    int c =  x/y;
    cout << c <<endl;


}

Calculator(int p , int q){
    x=p;
    y=q;

}


};

int main(){

    Calculator cal(12,34);
    cal.add();
    cal.mul();
    cal.substract();
    cal.div();


    return 0;
}