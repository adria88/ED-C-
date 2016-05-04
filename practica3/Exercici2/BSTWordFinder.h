/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BSTWordFinder.h
 * Author: adria
 *
 * Created on 4 de mayo de 2016, 12:37
 */

#ifndef BSTWORDFINDER_H
#define BSTWORDFINDER_H
#include "BinarySearchTree.h"
#include "Position.h"
class BSTWordFinder {
public:
    BSTWordFinder();
    BSTWordFinder(const BSTWordFinder& orig);
    virtual ~BSTWordFinder();
    void appendText(std::string);
    void insertWord(std::string,std::string,Position<std::string> *);
    std::vector<int> findOcurrences(std::string);
    void viewIndex();
private:
    BinarySearchTree<std::string> bt;
};

#endif /* BSTWORDFINDER_H */

