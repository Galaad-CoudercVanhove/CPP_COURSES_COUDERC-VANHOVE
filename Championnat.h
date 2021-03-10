#include <string>
#include <iostream>

class Championnat{
    private:
        std::string _nomCourse1;
        std::string _nomCourse2;
        std::string _nomCourse3;
        std::string _nomCourse4;
        int _bestScore;
        int _moyenneScore;
        int _topScore;
        std::string _bestJoueur;
        std::string _topJoueur;
    public:
        std::string getNomCourse1();
        std::string getNomCourse2();
        std::string getNomCourse3();
        std::string getNomCourse4();
        float getBestScore();
        float getMoyenneScore();
        float getTopScore();
        std::string getBestJoueur();
        std::string getTopJoueur();
};