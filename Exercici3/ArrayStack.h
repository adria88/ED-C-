/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayStack.h
 * Author: adria
 *
 * Created on 29 de marzo de 2016, 14:12
 */

#ifndef ARRAYSTACK_H 
#define ARRAYSTACK_H 
#include <cstdlib> 
#include <iostream> 
#include <string> 
#include <stdexcept> 
using namespace std;  
template <class E> 
class ArrayStack { 
    enum { DEF_CAPACITY = 100};  
public: 
    ArrayStack(int cap = DEF_CAPACITY); // constructor 
    ArrayStack(const ArrayStack& orig); // copy constructor 
    
    int size () const;     // return the size  
    bool empty() const;    // return TRUE if the stack is empty  
    bool full() const;  
// return TRUE if the stack is full 
    const E& top() const ; // return the top element of stack 
    void push(const E& e); // introduce an element in the stack 
    void pop() ;           // remove top element from the stack 
    // ... housekeeping functions  
    void print() const; 
private: 
    E* S;  
    int capacity;  
    int t=-1;  
}; 

template<class E>
ArrayStack<E>::ArrayStack(int cap){//constructor amb la capacitat max
    cap=capacity;
}


template <class E>
bool ArrayStack<E>::empty()const
{
    if(t == -1){
        return true;//pila buida
    }
    else{
        return false;//pila no buida
    }
}
template <class E>
bool ArrayStack<E>::full()const{
    if(t==capacity()){
        return true;//pila plena
    }
    else{
        return false;//pila no plena
    }
}
template <class E>
void ArrayStack<E>::pop(){
    S[t]==NULL;//elimina el valor del top
    t++;//suma 1 al top
}

template <class E>
void ArrayStack<E>::print()const{
    cout<<"la pila es:"<<endl;
    //cout<<t;
    int i;
    for(i=0;i<=t;i++){//de la posicio 0 al top
            cout<<S[i]<<",";//printa cada element a pila       
    }
}
template <class E>
void ArrayStack<E>::push(const E& e){
    t++;//suma 1 al top
    S[t]=e;//asigna un element al top
}
template <class E>
int ArrayStack<E>::size() const{
    return t+1;//retorna el top mes 1 per lelement 0
}
template <class E>
const E& ArrayStack<E>::top() const{
    return S[t];//retorna el top
}

#endif /*ARRAYSTACK_H*/