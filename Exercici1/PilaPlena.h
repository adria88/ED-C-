/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PilaPlena.h
 * Author: amartill26.alumnes
 *
 * Created on 10 / març / 2016, 13:39
 */

#ifndef PILAPLENA_H
#define PILAPLENA_H
using namespace std;
#include <string>
class PilaPlena {
public:
    PilaPlena(string);
    string what();
    
private:
    string mensajeDeError;
};

#endif /* PILAPLENA_H */

