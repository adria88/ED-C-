/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayQueue.h
 * Author: adria
 *
 * Created on 28 de marzo de 2016, 20:47
 */

#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H
#include <vector>
using namespace std;
class ArrayQueue {
public:
    ArrayQueue();
    ArrayQueue(const ArrayQueue& orig);
    virtual ~ArrayQueue();
    int size();
    bool empty();
    bool full();
    void enqueue(const char item);
    void dequeue();
    void print();
    
private:
    //front i rear
    int f;
    int r;
    int MAX_QUEUE = 100;
    std::vector<char> data = std::vector<char>(MAX_QUEUE);
};

#endif /* ARRAYQUEUE_H */

