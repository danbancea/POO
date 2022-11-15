#include "Classes.h"

//Carte::Carte(const std::string& nume_, const std::string& serie_, const std::string& categorie_, double pret_) : nume{nume_}, serie{serie_}, categorie{categorie_}, pret{pret_} {

    //std::cout<<"Constructor de initializare cu param. clasei Carte\n";

//}


Carte::Carte(const Carte&other):nume {other.nume}, autor {other.autor}, categorie{other.categorie}, serie{other.serie},  pret{other.pret} {

    //std::cout << "Constructor de copiere pentru Carte\n";

}
Carte&Carte::operator=(const Carte& other){
    nume = other.nume;
    autor = other.autor;
    categorie = other.categorie;
    serie = other.serie;
    pret = other.pret;
    //std::cout << "operator= copiere carte\n";
    return *this;
}
Carte::~Carte() = default;

//std::cout << "Destructor pentru Carte\n";





Angajat::Angajat(const std::string &nume, int salariu, int id) : nume(nume), salariu(salariu), id(id) {}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << "nume: " << angajat.nume << " salariu: " << angajat.salariu << " id: " << angajat.id;
    return os;
}

Client::Client(const std::string &nume, const std::string &locatie, int oraStart, int oraFinal) : nume(nume),
                                                                                                  locatie(locatie),
                                                                                                  ora_start(oraStart),
                                                                                                  ora_final(oraFinal) {}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "nume: " << client.nume << " locatie: " << client.locatie << " ora_start: " << client.ora_start
       << " ora_final: " << client.ora_final;
    return os;
}

Curier::Curier(const std::string &nume, const std::string &curier, int nrComanda) : nume(nume), curier(curier),
                                                                                    nr_comanda(nrComanda) {}

std::ostream &operator<<(std::ostream &os, const Curier &curier) {
    os << "nume: " << curier.nume << " curier: " << curier.curier << " nr_comanda: " << curier.nr_comanda;
    return os;
}
