/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Position.h
 * Author: adria
 *
 * Created on 21 de abril de 2016, 21:05
 */

#ifndef POSITION_H
#define POSITION_H
using namespace std;

class Position {
public:
    Position();
    Position(const Position& orig);
    virtual ~Position();
    Position operator*();//retorna el element del node
    Position* parent();
    Position* left() const;
    Position* right() const;
    void setParent(Position* parent);
    void setRight(Position* right);
    void setLeft(Position* left);
    bool isRoot();
    bool isExternal();
    string getElement();
    int getLine();
private:
    Position* parent;
    Position* left;
    Position* right;
    int linea;
    string paraula;
};

#endif /* POSITION_H */

