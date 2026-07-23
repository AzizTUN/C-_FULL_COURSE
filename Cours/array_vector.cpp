#include <iostream>
#include <vector>
#include <ctime>
#include <string>

int main () {

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    for(std::string car : cars){
        std::cout << car << std::endl ;
    }


    return 0 ;
}