#include <iostream>
#include <string>
#include <cmath>

typedef std::string str;

str lower(str) ;

int main () {

    int mdps = 1234;
    int mdp ;
    str answ ;
    
    std::cout << "donner votre mot de pass : " ;
    std::cin >> mdp ;

    if (mdps==mdp){
        std::cout << "welcome Aziz ! \n";
        std::cout << "wanna dep or wth ? ";
        std::getline(std::cin>>std::ws,answ);

        switch(lower(answ)){
            case "dep" :

                break ;
            case "wth" :

                break ;
            default :
                std::cout << "wrong desc !" ;
                break;
        }
    }
    return 0 ;
}

str lowerr(str ch) {
    str ph;
    for(char c : ch) {
        ph += (char) ( (int) c  + 32) ;
    }return ph ;
}