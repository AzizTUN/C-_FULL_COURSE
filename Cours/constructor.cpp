#include <iostream>
#include <string>

typedef std::string str ;

class Student {
    public :
        str name;
        int age;
        double gpa;

        Student() : name(""), age(0), gpa(0.0) {}

        Student(std::string name, int age, double gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
    }
};

int main () {

    int size;
    std::cout <<"size ?: ";
    std::cin>>size;
int xlength;
    std::cout << "xlength : \n";
    std::cin>>xlength ;

    Student *eleve1 = nullptr ;
    eleve1 =new Student[xlength] ;
    delete eleve1;














    Student *eleve = nullptr ;
    eleve = new Student[size] ;

    eleve[0] = Student("Aziz",18,99.75);

    delete[] eleve;
    return 0;
}