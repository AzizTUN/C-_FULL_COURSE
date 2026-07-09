#include <iostream>
#include <string>

namespace first{
    int x = 1;
}
namespace second{
    int x =5;
}


int main () {
    using namespace first;
    using std::string;
    using std::cout;

    namespace f = second;
    namespace g = first;
    int x= 3;
    cout << f::x;
    return 0;
}