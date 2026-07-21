#include <iostream>
#include <string>
#include <cmath>
void triangle (int x);
void trec (int x,int y);
typedef std::string str;

int main () {

    /*for(int i = 0 ;i < 3 ; i++){
            for(int j = 0 ;j < 4 ; j++){
                std::cout << j+1 << ' ' ;
            }std::cout << std::endl ;
    }
    */
   int len ;
   std::cout << "length : " ;
   std::cin >> len ;
    triangle(len) ;
    std::cout << std::endl<<len ;
    trec(len,len);
    return 0 ;
}
void triangle (int x) {
    for(int i = 0 ;i < x ; i++){
            for(int j = 0 ;j < i+1 ; j++){
                std::cout << '*' << ' ' ;
            }std::cout << std::endl ;
    }
}

void trec (int x,int y) {
    if (y!=0){
        std::cout << '*' << ' ' ;
    }else if(x==0 && y==0){return;}
    else{
        std::cout << std::endl ;
        trec(x-1,y=y-1) ;
    }
}