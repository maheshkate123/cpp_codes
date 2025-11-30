#include <iostream>                       //user defined namespace 

namespace C2W {
    void course1(){
    std::cout << "html,css,js" << std::endl;
}
};

namespace C2W{
void course2(){
    std::cout << "cpp , java , python" << std::endl;
}
};


int main(){
    C2W::course1();
    C2W::course2();

    return 0 ;
    /*/*hitech/**/

}