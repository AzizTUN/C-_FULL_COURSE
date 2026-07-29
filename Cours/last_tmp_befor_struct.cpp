#include <iostream>
#include <string>

typedef std::string str ;

template <typename R,typename Q>
R tmpx (R x, Q y) {
    return x+y;
}

enum {
    monday , tuesday , thirsday
};
struct Eleve {
    str name ;
    str place ;
    int age ;

    void wellcome () {
        if (!name.empty()) {
            std::cout << "hello mi nombre es "<<name<<std::endl ;
        }else {
            std::cout << "give me a name first !\n" ;
        }
    }
};
class Velo {
    str name;
    int year;
    public :
    Velo (str name,int year){
        this->name = name;
        this->year = year;
    }
    void intro (){
        std::cout << "the year of foundation is : " << year <<std::endl ;
    }
};



int main () {
    int size;
    std::cout << "take a size for ur keys : " ;
    std::cin >> size ;
    char* keys = nullptr ;
    keys = new char[size];
    keys[0] = 'a'; std::cout <<keys[0]<<std::endl;
    Velo velo1("bmx",2007) ;
    velo1.intro();
    Eleve eleve1;
    eleve1.name = "aziz";
    eleve1.wellcome();

    

    delete[] keys ;
    return 0 ;
}