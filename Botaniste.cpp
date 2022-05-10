#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Botaniste.h"
#include "Plante.cpp"
#include "Plante.h"

using namespace std;

//default
Botaniste::Botaniste(){//Botaniste::Botaniste(string name):liste.push_back(Plante(name)){
    Plante test = Plante("Orchidée");
    argent = 1000;
    nEngrais = 3;
}



//accesseurs
int Botaniste::getArgent(){
    return argent;
}

int Botaniste::getEngrais(){
    return nEngrais;
}

void Botaniste::setArgent(int valeura){
    argent = argent + valeura;
}

void Botaniste::setEngrais(int valeuren){
    nEngrais = nEngrais + valeuren;
}



//méthodes
void Botaniste::dormir(){
    test.//for (int i=0;liste.size();i+1)
}


#endif