#include <iostream>
#include <string>
#include <cmath>

typedef std::string str ;

int etape12 (str card) ;
int etape3 (str card) ;
bool isDecimal(str card) ;

int main () {
    str card ;

    std::cout << "Credit Card please : " ;
    std::cin >> card ;
    if(card.empty() || !isDecimal(card)){
        return -1;
    }

    int tmp2 = etape12(card) ;
    int tmp3 = etape3(card) ;
    int tmp4 = tmp2 + tmp3 ;std::cout<<tmp2<<std::endl ;
    std::cout << (tmp4 % 10 == 0 ? "alr u have a valid Card." : "That's not a valid Card !") ;

    return 0 ;
}
bool isDecimal (str card) {
    for(char c:card) {
        if (c>'9' || c<'0') {return false;}
    }return true;
}
int etape12(str card) {
    int sum = 0 ;
    int tmp ;
    for(int i = card.length() - 2 ; i >= 0 ; i-=2){
        tmp = (((int) ((card[i])-'0')) * 2) ;
        if(tmp <= 9) {
            sum += ((int) ((card[i])-'0')) * 2 ;
        }else{sum+= (tmp)%10 + (tmp)/10;}
        
    }

    return sum ;
}

int etape3(str card) {
    int sum = 0 ;
    for(int i = card.length() -1  ; i >= 0 ; i-=2){
        sum += (int) ((card[i])-'0') ;
    }

    return sum ;
}