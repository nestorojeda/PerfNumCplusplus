#include <vector>
#ifndef PERFNUMC_ITERATOR_H
#define PERFNUMC_ITERATOR_H

class IteratorC{

public:
    IteratorC(int n);
    bool hasNext();
    std::vector<int> next();
private:
    int aux, rear, front;
    bool end = true;
};

#endif //PERFNUMC_ITERATOR_H
