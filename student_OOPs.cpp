#include <iostream>
using namespace std;


class Student{
public:
    int Age;
    string Name ;
    char Grade ;


    void Intro(){
        cout << "Name :" << Name <<endl;
        cout << "Age: " << Age <<endl;
        cout << "Grade:" << Grade <<endl;
    }

    Student(int age, string name , char grade){
        Age = age;
        Name = name;
        Grade = grade;
    }


};

int main(){

    Student student1 = Student(32,"Raj",'A');
    // student1.age  = 23;
    // student1.name = "Mahesh" ; 
    // student1.grade = 'A';
    student1.Intro();

    Student student2 = Student(23,"MK",'C');
    // student2.name = "Aish";
    // student2.age = 32;
    // student2.grade = 'B' ;
    student2.Intro();

    
    return 0;
}