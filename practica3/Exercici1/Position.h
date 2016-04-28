/* 
 * Fitxer: Position.h
 * Autors: Adrià Martí i Josep Núñez
 */

#ifndef POSITION_H
#define POSITION_H
#include<iostream>

template<class E>
class Position {
public:
    Position();
    Position(const Position& orig);
    virtual ~Position();
    Position<E>* parent();
    Position<E>* left() const;
    Position<E>* right() const;
    void setParent(Position<E>* );
    void setRight(Position<E>* );
    void setLeft(Position<E>* );
    bool isRoot();
    bool isExternal();
    bool hasLeft();
    bool hasRight();
    E getElement();
    void setElement(E);
private:
    Position<E>* parentElem;
    Position<E>* leftElem;
    Position<E>* rightElem;
    E paraula;
};

template<class E>
Position<E>::Position() {
    parentElem=NULL;
    leftElem=NULL;
    rightElem=NULL;
    paraula="";
    
}
template<class E>
Position<E>::Position(const Position& orig) {
}
template<class E>
Position<E>::~Position() {
}
template<class E>
Position<E>* Position<E>::parent(){
    return parentElem;
}
template<class E>
Position<E>* Position<E>::left() const{
    return leftElem;
}
template<class E>
Position<E>* Position<E>::right() const{
    return rightElem;
}
template<class E>
void Position<E>::setLeft(Position<E>* l){
    leftElem=l;
}
template<class E>
void Position<E>::setParent(Position<E>* p){
    parentElem=p;
}
template<class E>
void Position<E>::setRight(Position<E>* r){
    rightElem=r;
}
template<class E>
E Position<E>::getElement(){
    return paraula;
}
template<class E>
void Position<E>::setElement(E p){
    paraula=p;
}
template<class E>
bool Position<E>::isRoot(){//si el pare es null és el root
    return(parentElem==NULL);
}

template<class E>
bool Position<E>::hasLeft(){//té fill esquerre?
    return(leftElem!=NULL);
}

template<class E>
bool Position<E>::hasRight(){//té fill dret?
    return(rightElem!=NULL);
}

template<class E>
bool Position<E>::isExternal(){//si no té fills és node extern
    return((leftElem ==NULL)&&(rightElem==NULL));
}
