#include <vector>
#include "IteratorC.h"
#include <algorithm>

using namespace std;

IteratorC::IteratorC(int size, int n){
    end = true;
    this->size = size;
    this ->index.resize(n);
    for (int i=0; i<n; i++) {
        this->index[i] = i;
    }
}


vector<int> IteratorC::next(){
    vector<int> res(index);

    if(index[0] == (size-index.size())){
        end = false;
    } else {
        for (int i = index.size()-1; i >= 0; i--) {
            if (index[i] < size-(index.size()-(i))) {
                index[i]++;
                for (int j = i+1; j < index.size(); j++) {
                    index[j] = index[j-1] + 1;
                }
                break;
            }
        }
    }
    return res;
}

bool IteratorC::hasNext() {
    return end;
}


