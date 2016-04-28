/* 
 * Fitxer: binarySearchTree.h
 * Autors: Adrià Martí i Josep Núñez
 */

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Position.h"
#include <iostream>

template<class E>
class BinarySearchTree {
public:
    BinarySearchTree();
    BinarySearchTree(const BinarySearchTree& orig);
    virtual ~BinarySearchTree();
    int size();
    bool empty();
    Position<E>* root();
    void insert(Position<E>*);
    bool search(E);
    void printPreorder();
    void printPostorder();
    void printInorder();
    int height();
   
private:
    Position<E>* rootElem;
    E elem;
    int size(Position<E>*);
    void insert(Position<E>*, Position<E>*);
    bool search(E , Position<E>*);
    void preOrder(Position<E>*);
    void postOrder(Position<E>*);
    void inOrder(Position<E>*);
    int height(Position<E>*);
    
};

template<class E>
BinarySearchTree<E>::BinarySearchTree() {
     rootElem = new Position<std::string>();
}

template<class E>
BinarySearchTree<E>::BinarySearchTree(const BinarySearchTree& orig) {
}

template<class E>
BinarySearchTree<E>::~BinarySearchTree() {
}

template<class E>
Position<E>* BinarySearchTree<E>::root() {
    return rootElem;
}

template<class E>
bool BinarySearchTree<E>::empty() {
    return (rootElem->getElement() == "");
}

template<class E>
int BinarySearchTree<E>::size() {
    return size(rootElem);
}

template<class E>
int BinarySearchTree<E>::size(Position<E>* pos) {
    if (this->empty()) {
        return 0;
    } else {
        int count = 1;
        if (pos->hasLeft()) {
            count += size(pos->left());
        }
        if (pos->hasRight()) {
            count += size(pos->right());
        }
        return count;
    }
}

template<class E>
void BinarySearchTree<E>::insert(Position<E>* rootAux, Position<E>* nou) {
    if (this->empty()) {
        this->rootElem = nou;
    } else {
        if (rootAux->getElement() < nou->getElement()) {
            if (!rootAux->hasLeft()) {
                rootAux->setLeft(&nou);
                nou->setParent(&rootAux);
            } else {
                insert(rootAux->left(), nou);
            }

        } else if (rootAux->getElement() > nou->getElement()) {
            if (!(rootAux->hasRight())) {
                rootAux->setRight(&nou);
                nou->setParent(&rootAux);
            } else {
                insert(rootAux->right(), nou);
            }
        }
    }
}

template<class E>
void BinarySearchTree<E>::insert(Position<E>* nou) {
    insert(rootElem, nou);
}

template<class E>
void BinarySearchTree<E>::search(E paraula, Position<E>* pos) {
    if (paraula == pos->getElement()) {//si la paraula es igual a la del parent
        return true;
    } else if (paraula < pos->getElement()) {//si la paraula es menor a la del parent
        if (pos->hasLeft()) {
            this->search(paraula, pos->left()); //recursiva al node esquerre
        }


    } else if (paraula > pos->getElement()) {//si la paraula es major que la del parent
        if (pos->hasRight()) {
            this->search(paraula, pos->right()); //recursiva al node fill dret
        }
    } else {
        return false;//no trobada
    }
}
template<class E>
void BinarySearchTree<E>::search(E paraula){
    this->search(paraula,rootElem);
}

template<class E>
void BinarySearchTree<E>::preOrder(Position<E>* pos){
    if(pos !=NULL){//si el node no es null
        cout<<pos->getElement();//mostrar parent
        preOrder(pos->left());//recorregut arbre esquerre
        preOrder(pos->right());//recorregut arbre dret
    }
}

template<class E>
void BinarySearchTree<E>::printPreorder(){
    this->inOrder(rootElem);
}

template<class E>
void BinarySearchTree<E>::inOrder(Position<E>* pos){
    if(pos!=NULL){
        inOrder(pos->left());//recorrer arbre esquerre
        cout<<pos->getElement()<<endl;//mostrar parent
        inOrder(pos->right());//recorrer arbre dret
    }
}

template<class E>
void BinarySearchTree<E>::printInorder(){
    this->inOrder(rootElem);
}

template<class E>
void BinarySearchTree<E>::postOrder(Position<E>* pos){
    if(pos!=NULL){
        postOrder(pos->left());//recorrer arbre esquerre
        postOrder(pos->right());//recorrer arbre dret
        cout<<pos->getElement()<<endl;//mostrar parent
    }
}

template<class E>
void BinarySearchTree<E>::printPostorder(){
    this->postOrder(rootElem);
}

template<class E>
int BinarySearchTree<E>::height(Position<E>* pos){
    if(pos = NULL)
    {
        return 0;
    }
    else{
        int hleft = height(pos->left());//alçada esquerre
        int hright = height(pos->right());//alçada dreta
        
        if(hleft > hright){//si l'alçada esquerra es mes gran que la dreta 
            return hleft +1; 
        }
        else{
            return hright +1;
        }
    }
    
}




#endif /* BINARYSEARCHTREE_H */