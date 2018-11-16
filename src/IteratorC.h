#include <vector>
#ifndef PERFNUMC_ITERATOR_H
#define PERFNUMC_ITERATOR_H

class IteratorC{

public:
    IteratorC(std::vector<int> &list);
    void insert(int v);
    bool hasNext();
    std::vector<int> next();

    class Node{
    public:
        Node(IteratorC::Node *next, int info);

        Node();

    public:
            int info;
            IteratorC::Node *next = nullptr;
    };

    bool end = true;
private:
    IteratorC::Node *aux = nullptr, *rear = nullptr, *front = nullptr;
};

#endif //PERFNUMC_ITERATOR_H
