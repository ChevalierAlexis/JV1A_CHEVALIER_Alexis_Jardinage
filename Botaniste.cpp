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
    //for (int i=0;liste.size();i+1)
        if (test.getisfleur()==true){
            test.setjfleur();
            if (getjfleur()<5){
                setfane();
            }
        }
        if (0<test.gethydra()<4 & 0<test.gettaille()<2){
            test.setmatur(2);
            test.setstadem();
        }
        else{
            test.setmatur(-1);
            test.setstadem();
            if (test.getmatur()<0){
                cout<<"Votre "<<test.nomP<<" est morte."<<endl;
                delete(test);
            }
        }
        test.sethydra(-gethydra());
        test.setoffengrais();
        test.settaille(-1);
        test.setstadet();    
}

int Botaniste::achetere(){
    setEngrais(1);
    setArgent(-100);
}

int Botaniste::vendre(){ //int Botaniste::vendre(int nbrP){
    if (test.getisfleur()==true){
        setArgent(400);
        delete(test);
    }
    if (test.getisfane()==true){
        setArgent(20);
        delete(test);
    }
    else{
        setArgent(200);
        delete(test);
    }
}

int Botaniste::acheterp(){
    liste.push_back(Plante("grqgre"));
}


#endif