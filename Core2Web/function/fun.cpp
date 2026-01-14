#include <iostream>

void gun(){
    std::cout <<  " in gun " << std:: endl;
};

int fun(){
    std::cout << " In function ........" <<  std::endl;
    gun();

};

int main(){
    fun();
    // return  0 ;
}