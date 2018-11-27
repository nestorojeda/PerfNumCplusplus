#include <vector>
#ifndef PERFNUMC_ITERATOR_H
#define PERFNUMC_ITERATOR_H

class IteratorC{

public:
    IteratorC(int size, int n);
    bool hasNext();
    std::vector<int> next();
private:
    int size;
    std::vector<int> index;
    bool end;
};

#endif //PERFNUMC_ITERATOR_H
