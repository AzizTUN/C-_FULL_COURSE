#include <iostream>
#include <string>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
std::vector<std::tuple<bool,int,float>> person;
//typedef std::string string_t ;
int main() {
    using std::cout ;
    using str = std::string ;
    str name = "aziz";
    cout << name << std::endl;
    int x = 10;
    cout<< (x/=2);
    return 0;
}