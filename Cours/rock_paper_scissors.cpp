#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player , char computer);

typedef std::string str ;

int main () {
    char player;
    char computer;

    player = getUserChoice();
    computer = getComputerChoice();
    chooseWinner(player,computer) ;
    std::cout << "player choice : " ;
    showChoice(player) ;
    std::cout << "computer choice : " ;
    showChoice(computer) ;

    std::cout << "*************************";
    return 0 ;
}

/*fnc*/
char getUserChoice(){

    char player;
    std::string valid = "rsp" ;
    std::cout << "Rock-Paper-Scissors Game!\n";
    std::cout << "*************************\n";
    do{
        std::cout << "'r' for rock 'p' for paper 's' for scissors : ";
        std::cin >> player ;
    }while(player != 'r' && player != 's' && player != 'p' 
        /*valid.find(player) == std::string::npos*/ );
    return player;
}
char getComputerChoice(){
    char computer ;
    srand(time(NULL)) ;
    int tmp = rand()%3+1 ;
    switch(tmp){
        case 1 :
            computer = 'r';
            break;
        case 2 :
            computer = 'p';
            break;
        default :
            computer = 's' ;
            break ;
    }return computer ;

    return computer ;
}
void showChoice(char choice){
    std::cout << choice << std::endl ;
 
}
void chooseWinner(char player , char computer){

    std::cout << (player==computer ? "its a tie !" : 
                 (player=='r' && computer =='p') ?"         u lose !":
                 (player=='r' && computer =='s') ?"         u win !":
                 (player=='s' && computer =='r')?"          u lose !":
                 (player=='s' && computer =='p')?"          u win !":
                 (player=='p' && computer =='s')?"          u lose !":
                                                 "          u win !") ;
    std::cout << "\n" ;

}