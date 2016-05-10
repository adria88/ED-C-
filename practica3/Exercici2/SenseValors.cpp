/* 
 * Fitxer: SenseValors.cpp
 * Autors: Adrià Martí i Josep Núñez
 */
 
#include "SenseValors.h"
 
SenseValors::SenseValors() {
    missatge="\nEl vector no té valors a consultar.";
}
 
SenseValors::SenseValors(string missatgeError){
    missatge=missatgeError;
}
 
string SenseValors::what(){
    return missatge;
}
 
SenseValors::SenseValors(const SenseValors& orig) {
}
 
SenseValors::~SenseValors() {
}

