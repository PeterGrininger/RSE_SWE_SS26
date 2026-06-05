#pragma  once
#include <iostream>
#include <ostream>

class Base{
    public:
        virtual void whoami(){std::cout<<"i am base, my counter is "<<internal_counter++<<std::endl;} //virtual damit es überschrieben werden kann (kann sich mit dynamischen Datentyp ändern)

    protected:
        int internal_counter =0;
};