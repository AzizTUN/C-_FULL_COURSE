#include <iostream>
#include <string>
#include <cmath>

typedef std::string str ;
void swap (int &x,int &y) ;

int main () {

    int x = 10 ;
    int y = 25 ;
    swap(x,y) ;
    std::cout << x <<'\n';
    std::cout << y <<'\n';

    const int* px = &x ;
    std::cout << px <<'\n';

    return 0 ;
}

void swap (int &x,int &y) {

    int tmp = x;x=y;y=tmp;

}