//
// Created by Néstor Ojeda on 15/11/2018.
//
#include <vector>
#ifndef PERFNUMC_ITERATOR_H
#define PERFNUMC_ITERATOR_H
struct Node{
    bool valid;
    int info;
    Node *next;
};
class Iterator{
private:
    Node front, aux, rear;
    bool end;
public:
    Iterator(std::vector<int> &list);
    void insert(int v);
    int next();

};

#endif //PERFNUMC_ITERATOR_H
