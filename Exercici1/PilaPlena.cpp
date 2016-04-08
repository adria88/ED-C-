/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PilaPlena.cpp
 * Author: amartill26.alumnes
 * 
 * Created on 10 / març / 2016, 13:39
 */

#include "PilaPlena.h"

PilaPlena::PilaPlena(string mensaje) {//constructor amb missatge
    mensajeDeError=mensaje;
}
string PilaPlena::what(){//redifinicio del metode what amb retorn amb el missatge d'error;
    return mensajeDeError;
}

