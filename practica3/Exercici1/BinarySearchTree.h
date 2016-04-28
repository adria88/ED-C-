/* 
 * Fitxer: binarySearchTree.h
 * Autors: Adrià Martí i Josep Núñez
 */

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Position.h"
#include <string>

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
    bool search(string);
    void printPreorder();
    void printPostorder();
    void printInorder();
    int height();
private:
    Position<E>* rootElem;
    int size(Position<E>*);
    void insert(Position<E>*,Position<E>*);
};

template<class E>
BinarySearchTree<E>::BinarySearchTree() {
   std::string rootElem= new Position();
}

template<class E>
BinarySearchTree<E>::BinarySearchTree(const BinarySearchTree& orig) {
}

template<class E>
BinarySearchTree<E>::~BinarySearchTree() {
}

template<class E>
Position<E>* BinarySearchTree<E>::root(){
    return rootElem;
}

template<class E>
bool BinarySearchTree<E>::empty(){
    return (rootElem->getElement()=="");
}

template<class E>
int BinarySearchTree<E>::size(){   
    return size(rootElem);
}

template<class E>
int BinarySearchTree<E>::size(Position<E>* pos){
    if (this->empty()){
        return 0;
    }else{
        int count=1;
        if (pos->hasLeft()){
            count += size(pos->left());
        }
        if (pos->hasRight()){
            count += size(pos->right());
        }
        return count;
    }
}

template<class E>
void BinarySearchTree<E>::insert(Position<E>* rootAux,Position<E>* nou){
    if (this->empty()){
        this->rootElem=nou;
    }else{
        if (rootAux->getElement()<nou->getElement()){
            if (!rootAux>hasLeft()){
                rootAux->setLeft(&nou);
                nou->setParent(&rootAux);
            }else{
                insert(rootAux->left(),nou);
            }
            
        }else if (rootAux->getElement()>nou->getElement()){
            if (!(rootAux->hasRight())){
                rootAux->setRight(&nou);
                nou->setParent(&rootAux);
            }else{
                insert(rootAux->right(),nou);
            }
        }
    }
}

template<class E>
void BinarySearchTree<E>::insert(Position<E>* nou){
    insert(rootElem,nou);
}

#endif /* BINARYSEARCHTREE_H */