#include "base.hpp"
#include <iostream>
#include <iterator>

class Derived: public Base { //wenn etwas in der Basisklasse private ist, dann ist es auch hier private -> dafür das public Base

    public:
        void whoami() override {std::cout<<"i am Derived, my counter is "<<internal_counter++<<std::endl;}
        //void whoami(){Base::whoami();internal_counter++;}
        void hello() {std::cout<< something <<std::endl;}
        
    private:
        int something;

};