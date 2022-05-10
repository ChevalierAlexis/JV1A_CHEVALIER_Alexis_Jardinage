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
        bool engrai;
        int jFleur;
        bool isfleur;
        bool isfane;

    //accesseurs
        int getmatur();
        int gethydra();
        int gettaille();
        bool getengrais();
        string getstadem();
        string getstadet();
        int getjfleur();
        bool getisfleur();
        bool getisfane();
        void setmatur(int valeurm);
        void sethydra(int valeurh);
        void settaille(int valeurt);
        void setonengrais();
        void setoffengrais();
        void setstadem();
        void setstadet();
        void setjfleur();
        void setonisfleur();
        void setfane();

    //Méthodes
        void engrais();
        void arroser();
        void tailler();
        void inspecter();

        Plante(string name);

};

#endif