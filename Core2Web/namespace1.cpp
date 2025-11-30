#include <iostream>


namespace test{
void course(){
    std::cout << " cpp , python ,  java" << std::endl;

}
};

void course(){
    std::cout << " html ,  css , js" << std::endl;

};

int  main(){

    test::course();
    course();
    std:: cout << __cplusplus << std::endl;                //  cpp version 
    
    return 0 ;
}