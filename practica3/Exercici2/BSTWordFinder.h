/* 
 * Fitxer: BSTWordFinder.h
 * Autors: Adrià Martí i Josep Núñez
 */

#ifndef BSTWORDFINDER_H
#define BSTWORDFINDER_H
#include "BinarySearchTree.h"
#include "Position.h"
#include <vector>
class BSTWordFinder {
public:
    BSTWordFinder();
    BSTWordFinder(const BSTWordFinder& orig);
    virtual ~BSTWordFinder();
    void appendText(std::string);
    void insertWord(std::string,int,int);
    void findOcurrences(std::string);
    void viewIndex();
private:
    BinarySearchTree<std::string> bt;
};

#endif /* BSTWORDFINDER_H */

