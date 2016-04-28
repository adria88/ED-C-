/* 
 * Fitxer: main.cpp
 * Autors: Adrià Martí i Josep Núñez
 */

#include <cstdlib>
#include "Position.h"
#include "BinarySearchTree.h"
#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    Position<string> pos= Position<string>();
    pos.setElement("hola");
    Position<string> pos2= Position<string>();
    pos2.setParent(&pos);
    pos2.setElement("adeu");
            
    cout<<pos.getElement()<<endl;
    cout<<pos2.parent()->getElement()<<endl;
    cout<<pos2.getElement()<<endl;
    
    BinarySearchTree<string> bt = BinarySearchTree<string>();
    Position<string> node= Position<string>();
    node.setElement("hola");
    
    Position<string> node2= Position<string>();
    node2.setElement("adeu");
    
    Position<string> node3= Position<string>();
    node.setElement("flipat");
    
    Position<string> node4= Position<string>();
    node4.setElement("cansat");
    
    bt.insert(node);
    
    
}
