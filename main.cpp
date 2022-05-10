#include "Plante.cpp"
#include "Botaniste.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    Plante test=Plante("Orchidée");
    test.inspecter();
    cout<<test.engrai<<endl;
    test.arroser();
    test.engrais();
    test.tailler();
    test.inspecter();
    test.engrais();
};