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
    Carte(const std::string &nume) : nume(nume) {}

    const std::string &getNume() const {
        return nume;
    }

    void setNume(const std::string &nume) {
        Carte::nume = nume;
    }

    friend std::ostream &operator<<(std::ostream &os, const Carte &carte) {
        os << "nume: " << carte.nume;
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