#include <iostream>
using namespace std;


class AbstractEmployee{           // abstract class 
    virtual void AskForPromotion()=0;

};

class Employee :AbstractEmployee{
public:
    int Age;
    double Salary ;
    string Company;
    string Name;

public:   
    void SetName (string name){
        Name = name;                               //setter
    }
    string getName(){
        return Name;
    }

    void setCompany(){
        Company = Company;
    }
    string getCompany(){
        return Company;              //getter 
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
    void AskForPromotion(){
        if(Age>30){
            cout << Name << " got promoted" << endl;
        }else{
            cout << Name << " no promotion sorry " << endl;
        }
    }

    Employee (string name , string company , int age){  // parameterized constrort
        Name = name;
        Company = company;
        Age = age;
    }

};

class Developer : public Employee{
public:
    string FavProgrammingLang;

    Developer(string name , string company , int age, string favProgrammingLang ):
    Employee(name , company ,age){
        FavProgrammingLang = favProgrammingLang;
    }
    void FixBug(){
        cout << getName() << " fixed bug using " << FavProgrammingLang << endl;
    }    
    
    };

class Teacher:Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout <<  Name << " is preparing " <<  Subject << " lesson " <<endl;

    }

    Teacher(string name , string company , int  age , string subject)
             :Employee(name ,company,age){
                Subject = subject ; 
             }

};


int main(){
    Employee employee1 = Employee("Raj" , "Tata" , 32);
    // employee1.Name = "Mahesh";
    // employee1.Salary = 560000.049;
    // employee1.Age = 28 ;
    // employee1.Company = "Novus Hitech";

    // employee1.IntroduceYourself();
    employee1.AskForPromotion();


    cout  << endl;

    Employee employee2 = Employee("Aish" ,"Cap" , 21);
    // employee2.Name = " Raj";
    // employee2.Comapany = "Google" ;
    // employee2.age = 32;
    // employee2.Salary = 1450000;
    // employee2.IntroduceYourself();
    employee2.AskForPromotion();

    // employee2.setAge(22);
    // cout << employee2.getAge() << "is " << employee2.getAge() << " years old" ;

    Developer d = Developer("RK" , "GOOGLE" , 32 , "C++");
    Developer d1 = Developer("MK" ,"MEta" , 34, "python"); 
    d.FixBug();
    d1.FixBug();

    d.AskForPromotion();


    Teacher t = Teacher("JK" ,"cool Teacher " , 32 , " History");
    t.PrepareLesson();


return  0 ;


}