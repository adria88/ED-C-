/* 
 * Fitxer: main.cpp
 * Autors: Adrià Martí i Josep Núñez
 */

#include <cstdlib>
#include "BSTWordFinder.h"
using namespace std;
#include <iostream>

int main(int argc, char** argv) {
    BSTWordFinder bst= BSTWordFinder();
    bst.appendText("smallText.txt");
    std::vector<int> vectorAux=vector<int>();
    vectorAux=bst.findOcurrences("a");//no funciona
    bst.viewIndex();
    return 0;
}

