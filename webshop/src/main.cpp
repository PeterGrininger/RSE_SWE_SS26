#include "base.hpp"
#include "derived.hpp"
#include <iostream>


int main (){
    // Derived derived;
    // derived.whoami();

    // Derived copy = derived;
    // copy.whoami();
    // derived.whoami();

    // // Base base;
    // // base.whoami();
    // // base.whoami();

    Derived derived;


    Derived *p_derived = &derived;
    p_derived ->whoami();
    p_derived ->hello();

    Base *p_base = new Base();
    p_base->whoami(); //Statischer Datentyp ein Pointer auf eine Klasse 

    //delete p_derived;
    //delete p_base;
    Derived *maybe = dynamic_cast<Derived*>(p_base);


    if (maybe == nullptr) { //mit Nullpointer vergleichen um zu sehen ob es convertiert werden kann (wegen Base *p_base = new Base();)
        std::cout << "cant convert\n";
    
    }else {
        maybe->hello();
    }

    return 0;
}

// Kann man sich so vorstellen 
// class Person; Name, Age,... , getIdentification
// class Student : public Person; getIdentification -> Matrikelnummer
// verify(const Person& p)



// Kann man sich so vorstellen 
// class Vehicle; // -> base
// class Car : public Vehicle; //-> derived
// class Bike : public Vehicle;
// class Bus : public Vehicle;
