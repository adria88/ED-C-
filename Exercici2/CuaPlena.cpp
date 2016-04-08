/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuaPlena.cpp
 * Author: adria
 * 
 * Created on 29 de marzo de 2016, 0:27
 */

#include "CuaPlena.h"
using namespace std;
#include <string>
CuaPlena::CuaPlena(string mensaje) {//constructor amb el missatge d'error
    mensajeDeError=mensaje;
}
string CuaPlena::what(){//redifinicio del metode what amb retorn del missatge d'error
    return mensajeDeError;
}

