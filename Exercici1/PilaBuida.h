/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PilaBuida.h
 * Author: amartill26.alumnes
 *
 * Created on 10 / març / 2016, 13:40
 */
#include<string>
using namespace std;


#ifndef PILABUIDA_H
#define PILABUIDA_H

class PilaBuida{
    
public:
    
    PilaBuida(string);//constructor
    string what();//redefinicio del metode what
    
    
private:
    string mensajeDeError;
};

#endif /* PILABUIDA_H */

