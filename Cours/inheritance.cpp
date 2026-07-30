#include <iostream>
#include <string>

typedef std::string str ;

class Shape {
    public :
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube (double side) {
        this->side = side ;
        this->area = 6*(side*side) ;
        this->volume = side * side * side ;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius ;
        this->area = 4*3.14159*(radius*radius) ;
        this->volume =(4/3.0)*3.14159*(radius * radius * radius) ;
    }
};

class Animal{
    public :
        bool alive = true ;
    void eat() {
        std::cout << "this animal is eating\n";
    }
};
class Dog : public Animal{
    str name;
    public :

    Dog (str name) {
        this->name = name;
    }
};

int main () {

    Dog dog1("alex");
    dog1.eat() ;

    Cube cube(10);
    Sphere sphere(12) ;
    std::cout << 
    cube.area << " | " <<
    cube.volume ;


    return 0 ;
}