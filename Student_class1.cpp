#include <iostream>

using namespace std;

class Student{
private:
   int Age ;
   string Name ;
   double Marks;

public:
    void setAge(int age ){   // setter 
        Age = age;
    } 
    int getAge(){            //getter 
        return Age;
    }

    void setName(string name){
        Name = name;
    }

    string getName (){
        return Name;
    }

    void setMarks(double marks){
        Marks = marks;
    }
    double getMarks(){
        return Marks ;
    }


    Student(int age , string name, double marks)       // para.constructor
    {
        Age = age;
        Name = name;
        Marks = marks;
    };
    
    void StudentInfo(){
        cout << " Age " << endl;
        cout << " Name " << endl;
        cout << " marks" << endl;

    }


};

int main(){

    Student student1 = Student(23 ,"Ram", 56.56);
    student1.StudentInfo();

    student1.setAge(32);        //use of settter
    cout << student1.getName() << " is " << student1.getAge()<< "  years old " << endl;    // getter 



    return  0 ;
}