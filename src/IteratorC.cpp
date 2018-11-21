#include <vector>
#include "IteratorC.h"

using namespace std;



IteratorC::IteratorC(int n){
    front = 0;
    aux = 1;
    rear = n;
}


vector<int> IteratorC::next(){
    vector<int> pos = {front,aux};
    if (front + 1 != rear){
        if(aux == rear){
            front++;
            aux = front +1;
        } else {
            aux++;
        }
    } else {
        end = false;
    }
    return pos;
}

bool IteratorC::hasNext() {
    return end;
}


