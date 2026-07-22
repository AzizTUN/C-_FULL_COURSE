#include <iostream>
#include <string>

void hp (std::string name) ;
void bakePizza() ;
void bakePizza(std::string ty) ;

int main () {

    //std::string name ;
    //std::cout << "whats ur name : ";
    //std::getline(std::cin>>std::ws,name);
    //hp(name);
    bakePizza();
    std::string topping = "fruit de mer" ;
    bakePizza(topping);

    /*
    An overloaded function is when you have multiple functions with
    the exact same name in the same scope, but with different parameters 
    (different types, different number of parameters, or both).
    */
    return 0 ;
}
void hp (std::string name) {
    std::cout << "heppy birthday " << name ;
}
void bakePizza(){
    std::cout << "Here is ur pizza\n" ;
}
void bakePizza(std::string ty){
    std::cout << "Here is ur pizza de" << ty+'\n' ;
}
