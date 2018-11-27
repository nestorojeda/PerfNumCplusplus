#include <vector>
#include "IteratorC.h"
#include <algorithm>

using namespace std;

IteratorC::IteratorC(int size, int n){
    end = true;
    this->size = size;
    this ->index.resize(static_cast<unsigned int>(n));
    for (int i=0; i<n; i++) {
        this->index[i] = i;
    }
}


vector<int> IteratorC::next(){
    vector<int> res(index); //Se copia el estado actual de index para enviarlo una vez se modifique
    //En caso de que el elemento más significativo haya llegado a su última posición, no quedan iteraciones posibles

    if(index[0] == (size-index.size())){
        end = false;
    } else {
        for (int i = index.size()-1; i >= 0; i--) {
            //Busca el primer elemento en la posición menos significativa que no ha llegado a su máximo valor,
            // lo aumenta en una unidad y cambia los elementos del array menos significativos que él
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


