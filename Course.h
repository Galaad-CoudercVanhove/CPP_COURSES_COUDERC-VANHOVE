#include <string>
#include <iostream>

class Course{
    private:
        std::string _nomcourse;
        std::string _nomjoueur;
        int _score1;
        int _score2;
        int _score3;
        int _bestscore;
        int _jamaisjoue;
    public:
        void afficher();
        std::string getNomcourse();
        std::string getNomjoueur();
        float getScore1();
        float getScore2();
        float getScore3();
        float getBestscore();
        float getJamaisjoue();
};