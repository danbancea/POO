#ifndef OOP_CLASSES_H
#define OOP_CLASSES_H

#include <iostream>
#include <string>
#include <vector>

class Carte{
    std :: string nume;
    std :: string serie;
    std :: string categorie;
    //double pret;
    //int nr_pagini;
public:
    Carte(const std::string &nume, const std::string &serie, const std::string &categorie) : nume(nume), serie(serie),
                                                                                             categorie(categorie) {}

    const std::string &getNume() const {
        return nume;
    }

    void setNume(const std::string &nume) {
        Carte::nume = nume;
    }

    const std::string &getSerie() const {
        return serie;
    }

    void setSerie(const std::string &serie) {
        Carte::serie = serie;
    }

    const std::string &getCategorie() const {
        return categorie;
    }

    void setCategorie(const std::string &categorie) {
        Carte::categorie = categorie;
    }

    friend std::ostream &operator<<(std::ostream &os, const Carte &carte) {
        os << "nume: " << carte.nume << " serie: " << carte.serie << " categorie: " << carte.categorie;
        return os;
    }

};


class Autor{
    std :: string nume;
    //int varsta;


};

class Angajat{
    std :: string nume;
    //int salariu;
};

class Client{
    std :: string nume;
    std :: string locatie;

};

#endif //OOP_CLASSES_H