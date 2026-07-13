#include <iostream>
#include <cmath>
#include <string>

typedef std::string str ;

int main() {
    int age ;
    std::cout << "give us ur age : " ;
    std::cin >> age ;

    //(age >= 18 && age != 40) ? std::cout << "ur a man now !" : age == 40 ? std::cout << "what ?" : std::cout << "ok" ;

    bool isHere = true ;
    //std::cout << (isHere ? "\nlove u" : "\nIm waiting .");


    double temp ;
    char unit;

    std::cout << "**** Temperature conversion ****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would u like to convert to: ";
    std::cin >> unit ;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp ;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n" ;
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp ;

        temp = (temp - 32) / 1.8  ;
        std::cout << "Temperature is: " << temp << "C\n" ;
    }else{
        std::cout << "wrong only C or F are accepted !\n" ;
    }

    std::cout << "*********************************";

    return 0 ;
}