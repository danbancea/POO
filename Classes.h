#ifndef OOP_CLASSES_H
#define OOP_CLASSES_H

#include <iostream>
#include <string>
#include <vector>

class Carte{
    std::string nume;
    std::string serie;
    std::string categorie;
    double pret;

public:

    Carte();
    //Carte(const std::string& nume_, std::string& serie_, std::string& categorie_);

    Carte(const std::string &nume_, const std::string &serie_, const std::string &categorie_, double pret_) : nume(nume_), serie(serie_),
                                                                                             categorie(categorie_), pret(pret_) {}


    Carte(const Carte& other);
    Carte& operator = (const Carte& other);

    ~Carte();
    //friend std :: ostream& operator << (std :: ostream& os, const Carte& ms) ;
    friend std::ostream &operator<<(std::ostream &os, const Carte &carte) {
        os << "Nume: " << carte.nume << " Serie: " << carte.serie << " Categorie: " << carte.categorie << " Pret: " << carte.pret << '\n';
        return os;
    }

    /*
    const std::string &getNume() const {
        return nume;
    }

    void setNume(const std::string &_nume) {
        Carte::nume = _nume;
    }

    const std::string &getSerie() const {
        return serie;
    }

    void setSerie(const std::string &_serie) {
        Carte::serie = _serie;
    }

    const std::string &getCategorie() const {
        return categorie;
    }

    void setCategorie(const std::string &_categorie) {
        Carte::categorie = _categorie;
    }
*/

};


/*class Autor{
    std :: string nume;
    //int varsta;
    //int nr_carti;


};

class Angajat{
    std :: string nume;
    //int salariu;
    //int
};

class Client{
    std :: string nume;
    std :: string locatie;

};
*/
#endif //OOP_CLASSES_H