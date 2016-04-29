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
 
    BinarySearchTree<string> bt = BinarySearchTree<string>();
    Position<string> node= Position<string>();
    node.setElement("hola");
    
    Position<string> node2= Position<string>();
    node2.setElement("hol");
    
    Position<string> node3= Position<string>();
    node3.setElement("a");
    
    Position<string> node4= Position<string>();
    node4.setElement("b");
    
    Position<string> node5= Position<string>();
    node5.setElement("c");
    
    Position<string> node6= Position<string>();
    node6.setElement("de");
    
    Position<string> node7= Position<string>();
    node7.setElement("fe");
    
    Position<string> node8= Position<string>();
    node8.setElement("k");
    
    Position<string> node9= Position<string>();
    node9.setElement("h");
    
    Position<string> node10= Position<string>();
    node10.setElement("rt");
    bt.insert(&node);
    bt.insert(&node2);
    bt.insert(&node3);
    bt.insert(&node4);
    bt.insert(&node5);
    bt.insert(&node6);
    bt.insert(&node7);
    bt.insert(&node8);
    bt.insert(&node9);
    
    cout<<"Inorder: "<<endl;
    bt.printInorder();
    cout<<"Postorder: "<<endl;
    bt.printPostorder();
    cout<<"Preorder: "<<endl;
    bt.printPreorder();
    
    cout<<"height:"<<bt.height()<<endl;
    
    cout<<"size:"<<bt.size()<<endl;
    
    if(bt.search("g")==true){
        cout<<"el node s'ha trobat"<<endl;
    }
    else
    {
        cout<<"el node no s'ha trobat"<<endl;
    }
}
