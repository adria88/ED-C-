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
    bt.insert("b");
    bt.insert("a");
    bt.insert("c");
    
    cout<<"Inorder: "<<endl;
    bt.printInorder();
    cout<<"\nPostorder: "<<endl;
    bt.printPostorder();
    cout<<"\nPreorder: "<<endl;
    bt.printPreorder();
    
    delete &bt;
    /*bt.printInorder();
    
    cout<<"\nHeight:"<<bt.height()<<endl;
    
    cout<<"Size:"<<bt.size()<<endl;
    
    if(bt.search("g")==0){
        cout<<"<\nEl node s'ha trobat"<<endl;
    }else{
        cout<<"\nEl node no s'ha trobat"<<endl;
    }
    */
    return 0;
}
