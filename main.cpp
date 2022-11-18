#include <iostream>
#include <algorithm>
#include "Classes.h"

int main() {

    Carte c1("The C++ Programming Language", "Bjarne Stroustrup", "Self-improvement", "IBAN: 9241-5241-515-43",  25.99);
    Carte c2("Harap Alb", "Ion Creanga", "Basme", "IBAN: 4321-5241-500-43",  19.99);
    std::cout << c1 << '\n';
    std::cout << c2 << '\n';
    Autor au1("Bjarne Stroustrup", {c1,c2}, 42, 5);
    std::cout << au1 << '\n';
    Angajat a1("Bogdan", 3500,2);
    std::cout << a1 << '\n';
    Client cl1("Libraria Humanitas", "Strada Sipca 42", 8, 18);
    std::cout << cl1 << '\n';
    Curier cr1("Cargus", "Popescu Ion", 3441352,  {cl1});
    std::cout << cr1 << '\n';
    c1.reducere_carte("Self-improvement",0.8);
    std::cout << c1 << '\n';
    c2.reducere_carte("Basme", 0.6);
    std::cout << c2 << '\n';
    return 0;

}
