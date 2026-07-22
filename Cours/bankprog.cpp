#include <iostream>
#include <string>
#include <cmath>

typedef std::string str;

str lower(str) ;

int main () {

    int mdps = 1234;
    int mdp ;
    str answ ;
    double mn ;
    double rea = 1000;

    std::cout << "donner votre mot de pass : " ;
    std::cin >> mdp ;

    if (mdps==mdp){
        std::cout << "welcome Aziz ! \n";
        std::cout << "wanna dps or wth ? ";
        std::getline(std::cin>>std::ws,answ);
        answ = lower(answ) ;
        if (answ == "wth") {
            std::cout << "how mush u wanna withdraw ? u have "<<rea <<" : ";
            std::cin>> mn ;
            if(mn>rea){std::cout<<"u cant , u dont have enought monney !";}
            else{std::cout<<"ur current sold is : "<<rea-mn;}
        }
        else if (answ == "dps") {
            std::cout << "how mush u wanna deposit ? u have "<<rea <<" : ";
            std::cin>> mn ;
            std::cout<<"ur current sold is : "<<rea+mn;
        
        }
    }
        else{
        std::cout << "wrong mdps !" ;
    }
    return 0 ;
}

str lower(str ch) {
    str ph;
    for(char c : ch) {
        if( 'A'<= c and 'Z'>= c ){
            ph += (char) ( (int) c  + 32) ;
        }else{ph+=c;}
    }
    return ph ;
}