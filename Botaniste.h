#ifndef BOTANISTE_H
#define BOTANISTE_H

#include "Plante.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Botaniste
{
    public:
        vector<Plante> liste;
        int argent;
        int nEngrais;

        //accesseurs
        int getArgent();
        int getEngrais();
        void setArgent(int valeura);
        void setEngrais(int valeuren);

        //méthodes
        void dormir();
        int acheterp();
        int vendre();
        int achetere();

        Botaniste(); //Botaniste(string name);

};

#endif

