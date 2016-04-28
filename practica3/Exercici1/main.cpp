/* 
 * Fitxer: main.cpp
 * Autors: Adrià Martí i Josep Núñez
 */

#include <cstdlib>
#include "Position.h"
#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    Position<string> pos=Position<string>();
    pos.setElement("hola");
    Position<string> pos2=Position<string>();
    pos2.setParent(&pos);
    pos2.setElement("adeu");
            
    cout<<pos.getElement()<<endl;
    cout<<pos2.parent()->getElement()<<endl;
    cout<<pos2.getElement()<<endl;
    
}
