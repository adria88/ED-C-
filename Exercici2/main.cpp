/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adria
 *
 * Created on 28 de marzo de 2016, 20:45
 */
#include "ArrayQueue.h"
#include "CuaBuida.h"
#include "CuaPlena.h"
#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ArrayQueue MevaCua; 
    cout<< "Mida actual de la cua: " << MevaCua.size() << endl; 
    cout<< "Encuem 3 elements a la cua... " << endl; 
    
    MevaCua.enqueue('1');
    MevaCua.enqueue('2'); 
    try{
    MevaCua.enqueue('3'); 
    }
    catch(CuaPlena& e){
            cout << e.what() << endl;
    }
    
    MevaCua.print(); 
    cout << "Cua plena (0:no, 1:si): " << MevaCua.full()<<endl; 
    cout<< "Treiem 1er element de la cua: "<<endl;
    try{
    MevaCua.dequeue();
    }
    catch(CuaBuida& e){
            cout << e.what() << endl;
        }
    MevaCua.print(); 
    cout<< "Treiem 2on element de la cua: " <<endl; 
    MevaCua.dequeue();  
    cout<< "Encuem 2 elements a la cua... " << endl; 
    MevaCua.enqueue('4'); 
    MevaCua.enqueue('5');  
    cout<< "Treiem 3er element de la cua: " <<endl; 
    MevaCua.dequeue(); 
    MevaCua.print(); 
    cout<<"Mida actual de la cua: " << MevaCua.size() << endl; 
    cout<<"Cua buida (0:no, 1:si): " << MevaCua.empty()<<endl;
}

