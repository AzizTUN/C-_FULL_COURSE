#include <iostream>
#include <string>

typedef std::string str ;


class Stove{
    private :
        int temp = 27;
    public :

        Stove(int temp){
            setTemperature(temp);
        }

    int getTemperature(){
        return temp ;
    }
    void setTemperature(int temp){
        if (temp < 0){
            this->temp = 0 ;
        }else{
            this->temp = temp ;
        }
    }
};


int main() {
    Stove stove(0) ;
    stove.setTemperature(32);
    std::cout << "the temp is "<<stove.getTemperature() <<std::endl;
    return 0 ;
}