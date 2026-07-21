#include <iostream>
#include <cmath>
#include <ctime>

int alea (int bi , int bs);
int main () {
    int bi ;
    std::cout << "borne inferieur : " ;
    std::cin >> bi ;

    int bs ;
    std::cout << "borne superieur : " ;
    std::cin >> bs ;

    int rnd = alea(bi,bs) ;
    std::cout << "le nombre aleatoire entre "<<bi<<" "<<bs<<"est : "<<rnd;
    return 0 ;
}

int alea (int bi , int bs) {
    srand(time(NULL)) ;

    int num = rand() ;
    return num % (bs-bi+1)+bi ;
}