/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: amartill26.alumnes
 *
 * Created on 10 / març / 2016, 13:05
 */

#include <cstdlib>

#include "ArrayStack.h"
#include "PilaBuida.h"
#include "PilaPlena.h"
#include <iostream>
#include <string>
#include<vector>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string cadena;
    int contPar=0;//contador de parentesis
    int contClau=0;//contador de claus
    int contClauda=0;//contador de claudators
    cout<<"introdueix la expresio a analitzar:"<<endl;
    cin>>cadena;//cadena introduida
    ArrayStack pila;
    
    for(char c: cadena){//per cada caracter a la cadena
        try{//si la pila no esta plena
            if(c=='(')//si es parentesis obert
            {
                contPar ++;//suma 1 al contPar
            }
            if(c==')')//si es parentesis tancat
            {
                contPar ++;//suma 1 al contPar
            }
            if(c=='[')//si es claudator obert
            {
                contClauda ++;//suma 1 al contador claudator
            }
            if(c==']')//si es claudator tancat
            {
                contClauda ++;//suma 1 al contador claudator
            }
            if(c=='{')//si es clau obert
            {
                contClau ++;//suma 1 al contador clau
            }
            if(c=='}')//si es clau tancat
            {
                contClau ++;//suma 1 al contador clau
            }
            pila.push(c);//afegeix lelement a la pila
        }
        catch(PilaPlena& e){//si esta plena
            cout << e.what() << endl;//llança excepcio pila plena
        }
    }
    cout<<cadena<<endl;
    //si els contadors son parells
    if(contPar % 2 == 0 && contClau % 2 == 0 && contClauda % 2 == 0 ){//si tots els contadors son parells
        
        cout<<"la cadena està ben aparellada"<<endl;
        
    }
    else{//sino son parells
         cout<<"la cadena està mal aparellada"<<endl;
    }
    //buidar la pila
    while(!pila.empty()){//mentre la pila no estigui buida
        pila.pop();//elimina valor
    }
    
    
   
    
    
}