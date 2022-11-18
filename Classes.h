#ifndef OOP_CLASSES_H
#define OOP_CLASSES_H

#include <iostream>
#include <string>
#include <vector>

class Carte{
    std::string nume;
    std::string autor;
    std::string categorie;
    std::string serie;
    double pret;

public:

    Carte(const std::string &nume, const std::string &autor, const std::string &categorie, const std::string &serie,
          double pret);

    Carte(const Carte& other);
    Carte& operator = (const Carte& other);

    ~Carte();

    friend std::ostream &operator<<(std::ostream &os, const Carte &carte) {
        os << "Nume: " << carte.nume  << " Autor: " << carte.autor << " Categorie: " << carte.categorie << " Serie: " << carte.serie << " Pret: " << carte.pret << '\n';
        return os;
    }

    void reducere_carte(const std::string &cat, double percent) {
            if (cat == this -> categorie && percent != 0 && percent != 1)
                this -> pret = this ->pret * percent;

    }


};

class Autor{
    std::string nume;
    std::vector <Carte> carti;
    int varsta;
    int nrc_scrise;
public:
    Autor(const std::string &nume, const std::vector<Carte> &carti, int varsta, int nrcScrise);

    friend std::ostream &operator<<(std::ostream &os, const Autor &autor);




};





class Angajat{
    std::string nume;
    int salariu;
    int id;
public:
    Angajat(const std::string &nume, int salariu, int id);

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

};



class Client{
    std::string nume;
    std::string locatie;
    int ora_start;
    int ora_final;
public:
    Client(const std::string &nume, const std::string &locatie, int oraStart, int oraFinal);

    friend std::ostream &operator<<(std::ostream &os, const Client &client);

};

class Curier{
    std::string nume;
    std::string curier;
    int nr_comanda;
    std::vector <Client> clienti;

public:
    Curier(const std::string &nume, const std::string &curier, int nrComanda, const std::vector<Client> &clienti);

    friend std::ostream &operator<<(std::ostream &os, const Curier &curier);
};



#endif //OOP_CLASSES_H