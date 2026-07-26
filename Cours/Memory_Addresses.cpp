#include <iostream>
#include <string>
#include <cmath>

int ConvertToDecimal (std::string ch , int b , int p)  ;
std::string ConvertToBases (int x,int b) ;
int main () {

    std::string name = "Aziz" ;
    int age = 21;
    bool student = true ;
    std::string* nameM = &name;
    std::string xui = std::to_string((uintptr_t)nameM);

    std::cout << &name << '\n' ;
    std::cout << &age << '\n' ;
    std::cout << &student << '\n' ;

    std::cout << xui.substr(2) << '\n' ;

    std::cout << ConvertToDecimal (xui.substr(2),16,1) <<'\n' ;
    std::cout << ConvertToBases(986,16);
    return 0 ;
}

int ConvertToDecimal (std::string ch , int b , int p ) {
    char last ;
    int ok ;
    if ( ch.empty() ) {
        return 0 ;
    }else if ( ch[ch.length()-1]>='a' && ch[ch.length()-1]<='f' ) {
        last = ch[ch.length()-1] ;
        ok = ( ((int) last )- 87 )*p ;
    }else{
        last = ch[ch.length()-1] ;
        ok = ( (int) last - '0' )*p ;
    }ch = ch.erase(ch.length()-1);
    return ok + ConvertToDecimal (ch , b , p*b) ;
}
std::string ConvertToBases (int x,int b) {
    if (x<=0) {
        return "" ;
    }else if(x%b>=10) {
        return ConvertToBases(x/b,b) + (char) (x%b + 87) ;
    }else {
        return ConvertToBases(x/b,b) +std::to_string((x%b)) ;
    }
}