/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayStack.h
 * Author: amartill26.alumnes
 *
 * Created on 10 / març / 2016, 12:09
 */

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include <vector>

class ArrayStack {
public:
    ArrayStack();
    ArrayStack(const ArrayStack& orig);
    virtual ~ArrayStack();
    bool empty (); //indica si la pila és buida
    bool full (); //indica si la pila és plena
    void push (const char item);//introdueix un element a la pila,
    // i retorna una excepció si no ha estat possible
    void pop ();//treu un element de la pila,
                //i retorna una excepció si no ha estat possible
    char top(); //retorna l’element del top de la pila
                // retorna una excepció si no ha estat possible
    void print(); // imprimeix tot el contingut de la pila
private:
    int MAX_STACK=30;
    std::vector<char> data = std::vector<char>(MAX_STACK);
    int t; // top de la pila
};

#endif /* ARRAYSTACK_H */