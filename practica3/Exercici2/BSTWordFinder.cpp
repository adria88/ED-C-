/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BSTWordFinder.cpp
 * Author: adria
 * 
 * Created on 4 de mayo de 2016, 12:37
 */

#include "BSTWordFinder.h"
#include "BinarySearchTree.h"

BSTWordFinder::BSTWordFinder() {
    bt = BinarySearchTree<std::string>();
}

BSTWordFinder::BSTWordFinder(const BSTWordFinder& orig) {
}

BSTWordFinder::~BSTWordFinder() {
}

