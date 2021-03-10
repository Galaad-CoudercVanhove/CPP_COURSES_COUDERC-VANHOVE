#include "Course.h"
#include <string>
#include <iostream>

void Course::afficher(){
    std::cout << Score1;
    std::cout << Score2;
    std::cout << Score3;
}

std::string Cousre::getNomjoueur(){
    return _nomjoueur;
}