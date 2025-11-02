#include <iostream>

using namespace std;


class  Student{
public:
    int Age;
    string Name;
    double Marks;


Student(int age , string name  , double marks){
    Age = age;
    Name = name;
    Marks = marks;
}


    void getStdInfo(){

        cout << "age  ::"<<Age << endl;
        cout << "Name  ::"<<Name << endl;
        cout << "Marks  ::"<<Marks << endl;

    }


};
int main(){
    Student std1(23 , " Raj" , 78.55);
    // std1.Age = 23;
    // std1.Name = "raj";
    // std1.Marks = 89.453;

    std1.getStdInfo();


   



    return 0 ;
    
}