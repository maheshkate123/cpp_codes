#include <iostream>
using namespace std;

class Student{              //class
public:
    int age ;          //data type  . members , variables 
    string name;
    char grade;
    double marks;

    void StudentInfo(){               //function
        cout << "Age :: " << age << endl;
        cout << "Name ::  " << name << endl;
        cout << "Grade :: " << grade << endl;
        cout << "Marks :: " << marks << endl;
    }

    Student(int Age , string Name , char Grade , double Marks){   //paraeterised constrctor
        age = Age;
        name = Name;
        grade = Grade ;
        marks = Marks;
 
    }

};

int main(){
    Student student1 = Student(23 , " Raj"  , 'A' , 89.99);               //object 
    // student1.age = 23;
    // student1.name = "Raj";
    // student1.grade = 'A' ; 
    // student1.marks = 84.143;
    student1.StudentInfo();                 //calling function



    Student student2 = Student(25 ," Ram" , 'B', 76.99);
    // student2.age = 25;
    // student2.grade =  'B' ; 
    // student2.marks = 78.34;
    // student2.name = "Ram";
    student2.StudentInfo();



    return 0;
}