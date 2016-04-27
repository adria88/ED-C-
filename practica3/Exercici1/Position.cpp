/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Position.cpp
 * Author: adria
 * 
 * Created on 21 de abril de 2016, 21:05
 */

#include "Position.h"
using namespace std;
#include <iostream>
Position::Position() {
    parent=NULL;
    left=NULL;
    right=NULL;
    paraula="";
    linea="0";
}

Position::Position(const Position& orig) {
}

Position::~Position() {
}

Position::parent(){
    return parent;
}

Position::left() const{
    return left;
}

Position::right() const{
    return right;
}

Position::setLeft(Position* l){
    left=l;
}

Position::setParent(Position* p){
    parent=p;
}

Position::setRight(Position* r){
    right=r;
}

Position::getElement(){
    return paraula;
}

Position::getLine(){
    return linea;
}
