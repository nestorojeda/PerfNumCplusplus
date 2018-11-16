#include <vector>
#include "IteratorC.h"

using namespace std;



IteratorC::IteratorC(vector<int> &list){
    for (int i= 0; i < list.size(); i++) {
        insert(i);
    }
}

void IteratorC::insert(int v){
    if(rear == nullptr){
        rear = new Node();
        front = rear;
    } else {
        rear->next = new Node();
        rear = rear->next;
        aux = front->next;
    }
    rear->info = v;
}

vector<int> IteratorC::next(){
    vector<int> pos = {front->info, aux->info};
    if(front->info != -1){
        if(aux == rear){
            if(front->next == rear){
                front = new Node();
                front->info = -1;
                aux = new Node();
                aux->info = -1;
            } else {
             front = front->next;
             aux = front->next;
            }
        } else {
            aux = aux->next;
        }
    }

    if(pos[0] == -1){
        end = false;
    }
    return pos;
}

bool IteratorC::hasNext() {
    return end;
}

IteratorC::Node::Node(IteratorC::Node *next, int info) : next(next), info(info) {}

IteratorC::Node::Node() {
    next = nullptr;
    info = -1;
}
