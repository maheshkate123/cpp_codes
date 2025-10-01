#include<iostream>
using  namespace std; 

class Division{
    public:
    string className ;
    int bechs;

    void display(){
        cout<<"inside division  func";
    }
};

class Student : public Division 
{
    private:
    int id ;
    string name;

    public:
    Student(int Id,string Name ){
        
    }
    ~Student()
    {
        cout << "display";
    }
    
};
