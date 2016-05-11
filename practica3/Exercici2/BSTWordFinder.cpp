/* 
 * Fitxer: BSTWordFinder.cpp
 * Autors: Adrià Martí i Josep Núñez
 */


#include "BSTWordFinder.h"
#include "BinarySearchTree.h"
#include <fstream>
#include <ctype.h>
#include <iostream>
#include <sstream>

BSTWordFinder::BSTWordFinder() {
    bt = BinarySearchTree<std::string>();
}

BSTWordFinder::BSTWordFinder(const BSTWordFinder& orig) {
}

BSTWordFinder::~BSTWordFinder() {
}

void BSTWordFinder::appendText(std::string f) {
    ifstream fitxer;
    std::string line;
    std::string paraula;
    int pos=1;
    int nlinea = 1;
    fitxer.open(f.c_str());
    if (!fitxer.fail()) {
        while (getline(fitxer,line)) { 
            std::istringstream isstream(line);
            while (isstream >> line)
            {   
                for(int i=0;i<line.length();i++){
                    if(!std::ispunct(line[i])){
                        line[i]=tolower(line[i]);
                    }
                    else{
                        line[i]=' ';
                    }       
                }
                bt.insert(line,nlinea,pos);
                pos++;   
            }
            nlinea++;
        }
        fitxer.close();
        
    }



}

void BSTWordFinder::insertWord(std::string paraula,int linea, int posicio) {  
    bt.insert(paraula,linea,posicio);   
}

void BSTWordFinder::findOcurrences(std::string paraula) {
    return bt.search(paraula);
    
}

void BSTWordFinder::viewIndex() {
    bt.printInorder();
}