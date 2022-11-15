#include <iostream>
#include <string>
#include <vector>
#include "Classes.h"

int main() {

    Carte c1("The C++ Programming Language", "IBAN: 9241-5241-515-43", "Self-improvement", 25.99);
    Carte c2("Harap Alb", "IBAN: 4321-5241-500-43", "Basme", 19.99);
    std::cout << c1;
    std::cout << c2;



    return 0;

}
