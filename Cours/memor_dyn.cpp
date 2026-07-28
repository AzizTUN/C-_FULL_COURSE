#include <iostream>
#include <ctime> 

void walk(int step) ;
int fact(int x) ;

int main () {

    srand(time(0)) ;
    int size = rand()%2+4;
    int *pNum = nullptr ;
    pNum = new int[size] ;

    for(int i = 0 ; i < size ; i++) {
        pNum[i] = rand()%10+1 ;
    }
    for(int i = 0 ; i < size ; i++) {
        std::cout << pNum[i] << std::endl;
    }
    walk(10);
    int y = fact(6);
    std::cout << y ;
    delete[] pNum ;
    return 0 ;
}
void walk (int step) {
    if(step != 0){
        walk(step-1);
        std::cout << "you walk step: "<<step<<'\n';
    }
}
int fact (int x){
    if(x==0){
        return 1;
    }else{
        return x*fact(x-1);
    }
}