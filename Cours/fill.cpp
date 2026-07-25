#include <iostream>
#include <string>
#include <ctime>

typedef std::string str ;

int main () {
//fill() = Fills a range of elemnets with a specified value
//fill(begin, end, value)
    const int SIZE = 3 ;
    str foods[SIZE] ;

    fill(foods,foods + SIZE/3,"pizza") ;
    fill(foods+SIZE/3,(foods+SIZE - (SIZE/3)),"tomato") ;
    fill((foods+SIZE - (SIZE/3)),foods+SIZE,"orange") ;
    /*for(str food : foods){
        std::cout << food << std::endl ;
    }*/
    str tmps[5] ;
    str tmp;
    int size = sizeof(tmps)/sizeof(str) ;
    for(int i =0 ; i<size ; i++){
        std::cout << "enter a food you like or 'q' to quit #" << i+1 << ": " ;
        std::getline(std::cin>>std::ws,tmp) ;
        if(tmp == "q"){
            break ;
        }tmps[i] = tmp ;
    }
    std::cout << "You like the following food:\n" ;
    for(str ftmp : tmps){
        if(ftmp.empty()) continue;
        std::cout << ftmp << std::endl ;
    }
    return 0 ;
}