/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayStack.cpp
 * Author: amartill26.alumnes
 * 
 * Created on 10 / març / 2016, 12:09
 */

#include "ArrayStack.h"
#include "PilaBuida.h"
#include "PilaPlena.h"
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
ArrayStack::ArrayStack() {
    this-> data = data;
    this-> t=t;
    t=-1;
}

ArrayStack::ArrayStack(const ArrayStack& orig) {
}

ArrayStack::~ArrayStack() {
}
//pila buida
bool ArrayStack::empty(){
    if(t == -1){//si la t es -1
        return true;//esta buida
    }
    else{
        return false;//no esta buida
    }
}
//pila plena
bool ArrayStack::full(){
    if(t == data.size()){//si la t es igual al maxim de la pila
        return true;//esta plena
    }
    else{
        return false;//no esta plena
    }    
}
//afegir element a la pila
void ArrayStack::push(const char item){
    if(this->full()){//si esta plena
        throw PilaPlena("La pila esta plena");
        //throw exception;
    }
    t++;//sumem 1 al top
    data[t]=item;//asignem a la posicio top el nou item
    
}
void ArrayStack::pop(){
    if(this->empty()){//si esta buida
        throw PilaBuida("La pila esta buida");
        //throw exception;
    }
    data[t]=NULL;//borrem el valor del top
    t--;//estem 1 al top
}
//retorna lultim element
char ArrayStack::top(){
    return data[t];
}
//mostra per pantalla la pila
void ArrayStack::print(){
    int i;
    for(i=0;i<=t;i++)//per tota la pila
    {
        cout<<data[i]<<",";//printa cada valor
    }
}
