/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuaBuida.cpp
 * Author: adria
 * 
 * Created on 29 de marzo de 2016, 0:27
 */

#include "CuaBuida.h"
#include <stdexcept>
using namespace std;

CuaBuida::CuaBuida(string mensaje){//constructor amb el missatge derror
    mensajeDeError=mensaje;
}
string CuaBuida::what(){//redifinicio del metode what amb el retorn del missatge d'error
    return mensajeDeError;
}
