#include <iostream>
#include <string>
#include <cmath>

typedef std::string str ;

namespace second {
    str name ;
}

int main () {
    str name ;
    std::cout << "give us ur name : " ;
    std::getline(std::cin >> std::ws , name) ;
    std::cout <<( name.length() == 0 ? "no wrong !\n"  : ("hello "+ name+'\n')) ;
    //we have xx.clear() that make the var empty .
    //we have ww.append("") that append things after the var
    //.append(3,'a') : add 3 'a' in the END | t.append(x,2,3) : add to t from x from index 2 and take 3 car
    //x.at(0) like x[0] just the at one can give an exception if its outOfRange
    //we have .insert(0,'@') it add '@' at the begining
    //.find(' ') pos from 0   IF NOT FOUND IT RETURN std::string::npos
    //.erase(0,3) like effacer from 0 2 things !!!
    //we have .substr(pos,length) exc!!
    //.replace(pos,length,newStr) 
    str a = "abcdefjhigklmnopqrstuvwxyz"; a.erase(10,3) ;
    std::cout << a <<std::endl ;
    // trying replace;
    std::cout << "give us ur full name : " ;
    std::getline(std::cin>>std::ws , second::name) ;
    namespace s = second ;
    size_t pos = s::name.find(name) ;
    if(pos != str::npos){
        s::name.replace(pos,name.length(),"Mr") ;
        std::cout << s::name ;
    }
    else{
        std::cout << "matching ; error !" ;
    }
// do while
str kk;
    std::cout << "\nkk : " ;
    std::getline(std::cin,kk) ;
while(kk.empty()){
    std::cout << "kk !! : " ;
    std::getline(std::cin ,kk) ;
}
std::cout << kk ;
/*
    do{}while() like js even for( ) but we have break continue

*/
    return 0 ;
}