#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

typedef std::string str ;

int main () {
    str cars[][3] = {{"Mustang", "Escape", "F-150"},
                    {"Corvette", "Equinox", "Silverdo"},
                    {"Challenger", "Durango", "Ram 1500"}};

int l = sizeof(cars)/sizeof(cars[0]);
int c = (sizeof(cars)/sizeof(str))/l;
std::cout << l;

    for(int i = 0 ; i < l ;i++){
        for(int j = 0 ; j < c;j++){
            std::cout << cars[i][j] << "|" ;
        }
        std::cout << '\n' ;
    }
    return 0 ;
}