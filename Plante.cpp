#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

using namespace std;

//default
Plante::Plante(string name):nomP(name) {
    int maturite = 0;
    int hydratation = 0;
    int taille = 0;
    int engrai = 0;
    string stadeMaturite = "Pousse";
    string stadeTaille = "Taillée";
};

//accesseurs
int Plante::gethydra(){
    return hydratation;
};

int Plante::getmatur(){
    return maturite;
};

int Plante::gettaille(){
    return taille;
};

int Plante::getengrais(){
    return engrai;
};

void Plante::sethydra(int valeurh){
    hydratation=hydratation+valeurh;
};

void Plante::setmatur(int valeurm){
    maturite=maturite+valeurm;
};

void Plante::settaille(int valeurt){
    taille=taille+valeurt;
};

void Plante::setengrais(int valeure){
    engrai=engrai+valeure;
};

//méthodes
void Plante::engrais(){
    if (getengrais==0){
        setmatur(1);
        setengrais(1);
        if (getmatur()>5 & getmatur()<15){
            stadeMaturite="Plante";
        }
        if (getmatur()>15){
            stadeMaturite="Fleur";
        }
        else {
            stadeMaturite="Pousse";
        }
    }
    else{
        cout<<"Cette plante a déjà reçu de l'engrais"<<endl;
    }
};

void Plante::arroser(){
    sethydra(1);
    cout<<"Cette plante a été arrosée"<<endl;
};

void Plante::tailler(){
    settaille(1);
    cout<<"Cette plante a été taillée"<<endl;
}

void Plante::inspecter(){
    cout<<"Cette "<<stadeMaturite<<" de "<<nomP<<" a une hydratation de "<<gethydra()<<" et est "<<stadeTaille<<endl;
}

#endif