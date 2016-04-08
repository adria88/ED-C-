/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PilaBuida.cpp
 * Author: amartill26.alumnes
 * 
 * Created on 10 / març / 2016, 13:40
 */

#include "PilaBuida.h"
#include <stdexcept>
using namespace std;

PilaBuida::PilaBuida(string mensaje){//constructor amb el missatge d'error
    mensajeDeError=mensaje;
}
string PilaBuida::what(){//redifinicio del metode what i retorn del missatge
    return mensajeDeError;
}
