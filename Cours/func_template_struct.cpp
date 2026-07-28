#include <iostream>
#include <string>

typedef std::string str ;
/*int max(int x,int y);
double max(double x,double y);
*/

template <typename T>
T max(T x, T y) {
    return (x > y) ? x : y;
}
template <typename U,typename W>
W GHT (U cart,W mof) {
    return cart + mof;
}

int main () {
    std::cout << max(9,7) ;
    std::cout << max(9.8,9.89) ;
    return 0 ;
}

/*int max(int x,int y) {
    return (x>y?x:y);
}
double max(double x,double y) {
    return (x>y?x:y);
}*/
