#include <iostream>
using namespace std;


class EmployeeDetails{      //class
public:
    int Age ;
    string Name ;
    double  Salary;               // data variables 

    EmployeeDetails(int age,string name ,double salary){
        Name = name ;
        Age = age;
        Salary = salary ; 
    }

    void GetInfo(){
        cout << "name :" << Name <<endl;
        cout << "age :" << Age <<endl;
        cout << "saalry :" << Salary <<endl;
        
    }

};

int main(){           //main function
    EmployeeDetails emp1(32, "Raj" ,  67500);
    // emp1.Name =  " Raj" ;
    // emp1.Age = 32;
    // emp1.Salary = 67560;
 
    // cout << "name :" << emp1.Name <<endl;
    // cout << "age :" << emp1.Age <<endl;
    // cout << "saalry :" << emp1.Salary <<endl;
    emp1.GetInfo();

    cout << endl;

    EmployeeDetails emp2(45 , "Ram" , 123500);
    // emp2.Name =  " Ram" ;
    // emp2.Age = 45;
    // emp2.Salary = 123450;
 
    // cout << "name :" << emp2.Name <<endl;
    // cout << "age :" << emp2.Age <<endl;
    // cout << "saalry :" << emp2.Salary <<endl;

    emp2.GetInfo();
    



return 0;

}