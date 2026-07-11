#include <iostream>
#include <string>
#include <cmath>

typedef std::string str ;

int main (){

    //double x = 3;
    //double y = 5;
    double z;double p;
    double s;double g;

    /*z = std::max(x,y) ;
    g = std::min(x,y) ;
    p = std::pow(x,y) ;
    s = std::sqrt(9) ;//abs() round() ceil() floor() */

    int x ;int y;
    std::cout << "donner x : ";
    std::cin >> x;

    std::cout << "donner y : ";
    std::cin >> y;

    double c = sqrt(pow(x,2)+pow(y,2)) ;
    std::cout << "the hypotenuse : " << c << "\n" ;

   // std::cout<<z<<g<<p<<s;
    return 0 ;
}