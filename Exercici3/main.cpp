/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adria
 *
 * Created on 29 de marzo de 2016, 14:10
 */

#include <cstdlib>
#include "ArrayStack.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ArrayStack<char> ac = ArrayStack<char>(10);//en teoria crea una nova pila de char pero no hem funciona
    ac.push('2');//afegeix un element
    ac.print();//printa la pila
    
    
    
}

