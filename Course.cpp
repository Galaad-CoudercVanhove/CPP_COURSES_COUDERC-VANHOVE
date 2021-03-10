#include "Course.h"
#include "Championnat.h"
#include <string>
#include <iostream>

void Course::afficher(){
    std::cout << _score1;
    std::cout << _score2;
    std::cout << _score3;
}

std::string Cousre::getNomjoueur(){
    return _nomjoueur;
}