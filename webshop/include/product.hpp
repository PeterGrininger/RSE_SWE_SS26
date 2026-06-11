#pragma once
#include <string>

class Product {
public:
    Product(const std::string& name, double unitprice, double weight);
    virtual ~Product() = default; //destruktor zum Aufräumen wenn speicher nicht mehr benötigt wird (wichtig für unseren String)
    virtual double getPrice() = 0; //Hier virtual hinzufügen -> wenn ich eine virtuelle Methode habe muss ich einen virtuellen destuktor verwenden (um alles sauber wieder zu löschen)
    [[nodiscard]] const std::string getName()const{return name;}
    [[nodiscard]] const double getUnitPrice()const{return unitprice;} //[[nodiscard]] -> Ergebnis von diesem Funktion call darf nicht einfach verworfen werdn muss irgenwo zugewiesen werden (bspw. im main)
    [[nodiscard]] const double getWeight()const{return weight;}//const weils sie ja den Zustand nicht ändern (damit es sauber ist)
private:
    std::string name;
    //uint32_t id;
    double unitprice;
    double weight;
};