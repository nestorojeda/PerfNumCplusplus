//
// Created by Néstor Ojeda on 15/11/2018.
//
#include <vector>
#ifndef PERFNUMC_ITERATOR_H
#define PERFNUMC_ITERATOR_H

class IteratorC{

public:
    IteratorC(std::vector<int> &list);
    void insert(int v);
    int* next();

    class Node{
    public:
        Node(IteratorC::Node *next, int info);

        Node();

    public:
            bool valid;
            int info;
            IteratorC::Node *next = nullptr;
    };

private:
    IteratorC::Node *aux = nullptr, *rear = nullptr, *front = nullptr;
    bool end = true;
};

#endif //PERFNUMC_ITERATOR_H
