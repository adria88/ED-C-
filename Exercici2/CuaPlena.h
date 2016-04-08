/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuaPlena.h
 * Author: adria
 *
 * Created on 29 de marzo de 2016, 0:27
 */

#ifndef CUAPLENA_H
#define CUAPLENA_H
#include <string>
using namespace std;
class CuaPlena {
public:
    CuaPlena(string);
    string what();
private:
    string mensajeDeError;
};

#endif /* CUAPLENA_H */

