#include <iostream>
using namespace std;

class Employee {
private:
    int Age;
    double Salary ;
    string Company;
    string Name;

public:
    void SetName (string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    void setCompany(){
        Company = Company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age>=18){
            Age = age;
        }
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        cout << " hello my name is " << Name << endl;
        cout << " Comapny :" << Company <<endl;
        cout << " age" << Age << endl;
        cout << " SAlary ::" << Salary << endl;
        
    }


    Employee (string name , string company , int age){  // parameterized constrort
        Name = name;
        Company = company;
        Age = age;
    }

};

int main(){
    Employee employee1 = Employee("Raj" , "Tata" , 32);
    // employee1.Name = "Mahesh";
    // employee1.Salary = 560000.049;
    // employee1.Age = 28 ;
    // employee1.Company = "Novus Hitech";

    employee1.IntroduceYourself();


    cout  << endl;

    Employee employee2 = Employee("Aish" ,"Cap" , 21);
    // employee2.Name = " Raj";
    // employee2.Comapany = "Google" ;
    // employee2.age = 32;
    // employee2.Salary = 1450000;
    employee2.IntroduceYourself();

    employee2.setAge(22);
    cout << employee2.getAge() << "is " << employee2.getAge() << " years old" ;

return  0 ;

}