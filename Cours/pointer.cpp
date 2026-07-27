#include <iostream>
#include <string>

typedef std::string str ;

int main () {

/*
 pointers = variable that stores a memory address of another variable
            somtimes it's easier to work with an address
 & address-of operator
 * dereference operator
        
*/

    str name = "Aziz" ;
    str* Pname = &name ;
    std::cout << Pname << std::endl ;

    str freePizzas[5] = {"pizza1","pieea2","pizza3","pizza4","pizza5"} ;
    str* pFreePizzas = freePizzas ;
    std::cout << *pFreePizzas << std::endl ;

    //Null pointers : nullptr
    int* pt = nullptr ;
    int x = 5 ;
    //pt = &x ;

    if(pt == nullptr){
        std::cout <<"adresse was not assigned\n";
    }else{std::cout <<"adresse was assigned\n";}

    std::cout <<*pt<<std::endl ;

    return 0 ;
}