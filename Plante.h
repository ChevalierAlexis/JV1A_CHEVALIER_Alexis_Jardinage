#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Plante {
    private : 
        string nomP;

    public :
    //variables
        int maturite;
        int hydratation;
        int taille;
        string stadeMaturite;
        string stadeTaille;
        int engrai;

    //accesseurs
        int getmatur();
        int gethydra();
        int gettaille();
        int getengrais();
        void setmatur(int valeurm);
        void sethydra(int valeurh);
        void settaille(int valeurt);
        void setengrais(int valeure);

    //Méthodes
        void engrais();
        void arroser();
        void tailler();
        void inspecter();

        Plante(string name);

};

#endif