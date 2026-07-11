#include <iostream>
#include <string>
typedef std::string str;
int fromCharCode(std::string ch);

namespace first{
    str name;
}


int main() {
    using std::endl;
    int x = 3.14 ;
    double y = (int) 10.99;
    int A = 65 ;
    char a = 'a';
    std::cout << (int) a <<endl;
    std::cout << (char) A <<endl;
    //std::cout<<y<<endl;
    std::string name = "ABC" ;
    std::cout << fromCharCode(name) << endl;

    //cin >>
    /*std::string prenom ;
    std::cin >> prenom;
    std::cin.ignore();
    std::cout << "what's ur prenom : " << prenom << endl;

    std::string age ;
    std::getline(std::cin , age) ;
    std::cout << "soy alumno tengo " << age << " anos" <<endl ;*/

    namespace fr = first ;

   /* std::cin >> fr::name ;
    std::cout << "ur name is : " << fr::name << '\n' ;

    str prenom;
    std::getline(std::cin >> std::ws ,prenom);

    std::cout << "ur prenom : " << prenom;
*/
    std::cout << "take it : ";
    str zer ;
    std::cin >> zer;

    return 0;

}

int fromCharCode(std::string ch) {

    int s = 0 ;
    for(int i = 0;i<ch.length() ; i++){
        s+= (int) ch[i] ;
    }
    return s ;
}