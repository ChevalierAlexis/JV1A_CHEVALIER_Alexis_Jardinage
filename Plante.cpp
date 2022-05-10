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
    bool engrai = false;
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

bool Plante::getengrais(){
    return engrai;
};

string Plante::getstadem(){
    return stadeMaturite;
};

string Plante::getstadet(){
    return stadeTaille;
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

void Plante::setonengrais(){
    engrai=true;
};

void Plante::setoffengrais(){
    engrai=false;
};

void Plante::setstadem(){
    if (getmatur()>5){
        stadeMaturite="Plante";
    }
    if (getmatur()>15){
        stadeMaturite="Fleur";
    }
    else {
        stadeMaturite="Pousse";
    }
};

void Plante::setstadet(){
    if (gettaille()==0){
        stadeTaille="non taillée";
    }
    if (gettaille()==1){
        stadeTaille="taillée";
    }
    if (gettaille()==2){
        stadeTaille="taillée court";
    }
    if (gettaille()<2){
        stadeTaille="blessée";
    }
};



//méthodes
void Plante::engrais(){
    if (getengrais()==false){
        setmatur(1);
        setonengrais();
        setstadem();
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
    setstadet();
    cout<<"Cette plante a été taillée"<<endl;
}

void Plante::inspecter(){
    cout<<"Cette "<<getstadem()<<" de "<<nomP<<" a une hydratation de "<<gethydra()<<" et est "<<getstadet()<<endl;
}

#endif