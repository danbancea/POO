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


    //Carte(const std::string& nume_, std::string& serie_, std::string& categorie_, double pret);

    Carte(const std::string &nume_, const std::string &autor_, const std::string &categorie_,  const std::string &serie_, double pret_) :
            nume(nume_), autor(autor_), categorie(categorie_),  serie(serie_), pret(pret_) {}


    Carte(const Carte& other);
    Carte& operator = (const Carte& other);

    ~Carte();

    friend std::ostream &operator<<(std::ostream &os, const Carte &carte) {
        os << "Nume: " << carte.nume  << " Autor: " << carte.autor << " Categorie: " << carte.categorie << " Serie: " << carte.serie << " Pret: " << carte.pret << '\n';
        return os;
    }

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

public:
    Curier(const std::string &nume, const std::string &curier, int nrComanda);

    friend std::ostream &operator<<(std::ostream &os, const Curier &curier);
};

#endif //OOP_CLASSES_H