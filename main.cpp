#include "Plante.cpp"
#include "Botaniste.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int choix = 0;
    Plante test=Plante("Orchidée");
    cout<<"Que voulez-vous faire ? 1 : engrais, 2 : arroser, 3 : tailler, 4 : inspecter, 5 : dormir"<<endl;
    while(choix!=5){
        int choix = 0;
        cin>>choix;
        if (choix==1){
            test.engrais();
        }
        if (choix==2){
            test.arroser();
        }
        if (choix==3){
            test.tailler();
        }
        if (choix==4){
            test.inspecter();
        }
    }
};