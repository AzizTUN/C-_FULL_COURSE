#include <iostream>
#include <cmath>
#include <string>

typedef std::string str ;
int main () {

    int month ;
    std::cout << "number of month : " ;
    std::cin >> month ;

    str x ;
    switch(month){
        case 1 : x = "january";
            break;
        case 2 : x = "february";
            break;
        default : x = "no";
            break;
    }
    std::cout << "ur in "<< x;
        std::cout <<std::endl;
        std::cout <<std::endl;
//CALCULATOR
    char op;double num1;double num2;double res;

    std::cout << "*************** CALCULATOR ******************\n";

    std::cout << "enter between (+-*/):" ;
    std::cin >> op ;

    std::cout << "enter #1:" ;
    std::cin >> num1 ;

    std::cout << "enter #2:" ;
    std::cin >> num2 ;

    switch(op){
        case '+' :std::cout <<num1<<'+'<<num2<< '=' << num1 + num2;
            break;
        case '-' :std::cout <<num1<<'-'<<num2<< '=' << num1 - num2;
            break;
        case '*' :std::cout <<num1<<'*'<<num2<< '=' << num1 * num2;
            break;
        case '/' :std::cout <<num1<<'/'<<num2<< '=' << num1 / num2;
            break;
        default :std::cout << "enter a valide operator !";
            break;
    }

    std::cout << "**********************************************";

    return 0 ;
}