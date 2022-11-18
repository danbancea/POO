#include "Classes.h"

Carte::Carte(const std::string &nume, const std::string &autor, const std::string &categorie, const std::string &serie,
             double pret) : nume(nume), autor(autor), categorie(categorie), serie(serie), pret(pret) {}


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


Autor::Autor(const std::string &nume, const std::vector<Carte> &carti, int varsta, int nrcScrise) : nume(nume),
                                                                                                    carti(carti),
                                                                                                    varsta(varsta),
                                                                                                    nrc_scrise(
                                                                                                            nrcScrise) {}

std::ostream &operator<<(std::ostream &os, const Autor &autor) {
    os << "nume: " << autor.nume <<  " varsta: " << autor.varsta << " nrc_scrise: "
       << autor.nrc_scrise << "carti: " ;
    for(const auto &i : autor.carti){
        os << i<< " ";
    }
    return os;
}


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


Curier::Curier(const std::string &nume, const std::string &curier, int nrComanda, const std::vector<Client> &clienti)
        : nume(nume), curier(curier), nr_comanda(nrComanda), clienti(clienti) {}

std::ostream &operator<<(std::ostream &os, const Curier &curier) {
    os << "nume: " << curier.nume << " curier: " << curier.curier << " nr_comanda: " << curier.nr_comanda
       << " clienti: " ;

    for(const auto &i : curier.clienti){
        os << i << " ";
    }

    return os;
}


