#include<iostream>

using namespace std;

class Student{
    private:
    int id;
    string name;

    public:
    Student(int Id , string  Name){
        id = id;
        name = Name;
    }

~Student()
{
    cout << "inside destroyer ";
}

};

int main(){{
    Student stu(1, "vaibhav");
    cout << "heyy" << endl;
}

return 0;
}