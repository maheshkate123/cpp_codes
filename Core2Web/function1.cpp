#include <iostream>


void gun(){
    std::cout<< " in gun...." << std::endl;
}
void fun(){
    std::cout << " in fun...."<< std::endl;
    gun();

}

int main(){
    fun();
    return 0 ;

}