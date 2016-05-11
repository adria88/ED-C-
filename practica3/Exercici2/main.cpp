/* 
 * Fitxer: main.cpp
 * Autors: Adrià Martí i Josep Núñez
 */

#include <cstdlib>
#include "BSTWordFinder.h"
using namespace std;
#include <iostream>
#include <fstream>
int main(int argc, char** argv) {
    BSTWordFinder bst= BSTWordFinder();
    std::string nfitxer;
    std::string line;
    cout<<"Introdueix el nom del fitxer de text:";
    cin>>nfitxer;
    bst.appendText(nfitxer);
    
    std::ifstream fitxer;
    fitxer.open("dictionary.txt");
    if (!fitxer.fail()) {
        while (getline(fitxer,line)) { 
            bst.findOcurrences(line);
        }
        
    }
    cout<<endl;
    cout<<"INDEX:-------------------------------------------------------------"<<endl;
    bst.viewIndex();
    
    return 0;
    
}

