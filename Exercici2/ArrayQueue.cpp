/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayQueue.cpp
 * Author: adria
 * 
 * Created on 28 de marzo de 2016, 20:47
 */

#include "ArrayQueue.h"
#include <iostream>
#include <vector>
#include <cstdio>
#include "CuaBuida.h"
#include "CuaPlena.h"

using namespace std;
ArrayQueue::ArrayQueue() {
    this->MAX_QUEUE= MAX_QUEUE;//max de capacitat de la cua
    this-> data = data;//cua
    this-> f = f;//front
    this-> r = r;//rear
    f= 0;
    r=-1;
}
void ArrayQueue::enqueue(const char item){
    if(this->full()){//si a cua esta plena
        throw CuaPlena("La cua està plena, no es poden afegir mes elements");
        //exception cola plena
    }
    r++;//suma un al rear
    data[r]=item;//asigna litem a la posicio del rear
    
}

void ArrayQueue::dequeue(){
    if(this->empty()){//si esta buida
        throw CuaBuida("La cua està buida, no es poden eliminar mes elements");
    }
    data[f]= NULL;//es borra lelement del front
    f++;//es suma 1 al front
}

int ArrayQueue::size(){
    int cont=0,i;
    if(!this->empty())//si esta buida
    {
        for(i=f; i<=r;i++){//del front al rear
            cont ++;//es suma al contador de elements
        }
        return cont;//es retorna el contador
    }
    
}
bool ArrayQueue::full(){
    if(r==MAX_QUEUE){//si el rear es igual a la capacitat max de la cua
        return 1;//cua plena
    }
    else{
        return 0;
    }
}
bool ArrayQueue::empty(){
    if(r==0){//si el rear es 0 
        return 1;//cua buida
    }
    else{
        return 0;
    }
    
}
void ArrayQueue::print(){
    int i;
    for(i=f; i<=r;i++){//desde el front al rear
        cout<<data[i]<<",";//printa cada element
    }
    cout<<endl;
}
ArrayQueue::ArrayQueue(const ArrayQueue& orig) {
}

ArrayQueue::~ArrayQueue() {
}

