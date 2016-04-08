/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuaBuida.h
 * Author: adria
 *
 * Created on 29 de marzo de 2016, 0:27
 */

#ifndef CUABUIDA_H
#define CUABUIDA_H
#include <string>
using namespace std;

class CuaBuida{
    
public:
    
    CuaBuida(string);
    string what();
    
    
private:
    string mensajeDeError;
};

#endif /* CUABUIDA_H */





