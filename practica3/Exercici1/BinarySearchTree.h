/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearchTree.h
 * Author: adria
 *
 * Created on 21 de abril de 2016, 21:00
 */

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Position.h"
class BinarySearchTree {
public:
    BinarySearchTree();
    BinarySearchTree(const BinarySearchTree& orig);
    virtual ~BinarySearchTree();
    int size();
    bool empty();
    Position* root();
    void insert(Position* nouNode);
    bool search();
    void printPreorder();
    void printPostorder();
    void printInorder();
    int height();
private:
    Position* root;
    
};

#endif /* BINARYSEARCHTREE_H */

