#include <iostream>
#include <string>
#include <ctime>

typedef std::string str;

void remplir(int T[],int n);
void aff(int T[],int n);
void trie(int T[],int n);

//void chng(int* p) ;
int main () {
    srand(time(NULL)) ;
    /*int x = 10 ;
    int* p = &x ;
    std::cout << p <<std::endl ;
    std::cout << *p <<std::endl ;
    std::cout << &x <<std::endl ;
    chng(p);
    std::cout << *p <<std::endl ;*/

    int n;
    do{
        std::cout << "n : ";
        std::cin >> n;
    }while (n <=0 or n>10 );
    int T [n] ;
    remplir(T,n) ;
    aff(T,n);
    trie(T,n);
    aff(T,n);


    return 0 ;
}
void remplir(int T[],int n) {
    for(int i = 0 ; i<n ; i++){
        T[i] = rand()%(10)+1 ;
    }
}
void aff(int T[],int n){
    for(int i = 0 ; i<n ; i++){
        std::cout << T[i] <<"|" ;
    }std::cout << '\n' ;
}
void trie(int T[],int n) {
    bool ok = true ;
    while (ok) {
        ok = false ;
        for(int i = 0 ; i <n-1 ; i++) {
            if (T[i]>T[i+1]) {
                int tmp = T[i];
                T[i] = T[i+1];
                T[i+1] = tmp;
                ok = true;
            }
        }n=n-1;
    }
}

/*void chng(int* p){
    *p = 100 ;
}*/