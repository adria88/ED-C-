/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearchTree.cpp
 * Author: adria
 * 
 * Created on 21 de abril de 2016, 21:00
 */

#include "BinarySearchTree.h"
using namespace std;
#include <iostream>
BinarySearchTree::BinarySearchTree() {
    root= new Position();
}

BinarySearchTree::BinarySearchTree(const BinarySearchTree& orig) {
}

BinarySearchTree::~BinarySearchTree() {
}

BinarySearchTree::root(){
    return root;
}

BinarySearchTree::empty(){
    return (root->parent()==NULL);
}

