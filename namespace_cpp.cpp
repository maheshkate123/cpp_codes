#include <iostream>
using namespace std;

using std::cout ;
using std::endl;
using std::string;


namespace namespace1
{
    int age  =  25;
    string name  = "Raj";
} // namespace name

namespace namespace2
{
    int age   = 35;
    
} // namespace name



int main(){    
    {
        cout << namespace2::age<< endl;
        cout << namespace1::name<< endl;
        cout << namespace1::name << " is " << namespace1::age<< " years old " << endl;


        
    } 
    

}