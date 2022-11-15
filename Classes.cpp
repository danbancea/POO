#include "Classes.h"


Carte::Carte() = default;

//Carte::Carte(const std::string& nume_, const std::string& serie_, const std::string& categorie_) : nume{nume_}, serie{serie_}, categorie{categorie_} {

    //std::cout<<"Constructor de initializare cu param. clasei Carte\n";

//}


Carte::Carte(const Carte&other):nume {other.nume}, serie{other.serie}, categorie{other.categorie}, pret{other.pret} {

    //std::cout << "Constructor de copiere pentru Carte\n";

}
Carte&Carte::operator=(const Carte& other){
    nume = other.nume;
    serie = other.serie;
    categorie = other.categorie;
    pret = other.pret;
    //std::cout << "operator= copiere carte\n";
    return *this;
}
Carte::~Carte(){

    //std::cout << "Destructor pentru Carte\n";

}

