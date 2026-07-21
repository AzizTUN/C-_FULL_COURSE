#include <iostream>
#include <ctime>
#include <cmath>

bool guesse (int nbr,int gs) ;

int main () {
    srand(time(NULL)) ;
    int gs ;
    int nbr ;

    int chnc = 3 ;
    //bool ok = guesse(nbr,chnc) ;
    while (true){

        if(chnc == 0 ){
            std::cout << "\nu lose gonna generate another number !\n"<<std::endl;
            chnc = 3;
        }

        std::cout << "give ur guesse between 1 -> 10 : " ;
        std::cin >> nbr ;

        if (chnc == 3) {
            gs = rand()%10+1 ;
        }
        if(guesse(nbr,gs)){
            std::cout << "u nailed it !" ;
            break ;
        }else{chnc--;}
    }

    return 0 ;
}

bool guesse(int nbr, int gs) {
    if (nbr > gs) {
        std::cout << "too big !" << std::endl;
    }
    else if (nbr < gs) {
        std::cout << "too small !" << std::endl;
    }
    else {
        return true;
    }

    return false;
}